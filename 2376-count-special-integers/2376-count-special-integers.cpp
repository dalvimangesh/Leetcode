class Solution {
public:
    
    int dp[10][(1<<10)][2][2];

    int solve( int i, int mask, bool tight, bool trailing, string &s) {
        
        if( i == (int) s.size() ){
            if(mask) return 1;
            return 0;
        }
        
        if( dp[i][mask][tight][trailing] != -1 ) {
            return dp[i][mask][tight][trailing];
        }
        
        int ans = 0;
        
        if( trailing ) {
            ans += solve( i+1, mask, tight and !( s[i] - '0' ), true, s );
        }
        
        char ub = '9'; 
        if(tight) ub = s[i];
        
        for( char c = '0'; c <=ub; c++ ){
            
            if( trailing and (c == '0') ) continue;
            
            int d = c - '0';
            
            if( ( mask >> d ) & 1LL ) {
                continue;
            }
            
            ans += solve( i+1,  mask | (1<<d) , tight and (c == ub), false, s  );
            
        }
        
        return dp[i][mask][tight][trailing] = ans;
    }
    
    int countSpecialNumbers(int n) {
        
        string s = to_string(n);
        
        memset(dp,-1,sizeof(dp));
        
        return solve( 0, 0, true ,true, s );
        
    }
};

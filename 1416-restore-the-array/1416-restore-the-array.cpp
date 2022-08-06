class Solution {
public:
    
    int mod;
    
    int dp[100000];
    
    Solution(){
        mod = 1e9 + 7;
    }
    
    int solve( int i, string &s, int k ) {
        
        int n = (int) s.size();
        
        if( i == n ) {
            return 1LL;
        }
        
        if(dp[i]!=-1){
            return dp[i];
        }
        
        if( s[i] == '0' ){
            return 0;
        }
        
        long long cur = 0;
        
        int ans = 0;
        
        for(int j=0;j<10;j++){
            
            if( (i+j) >=n ) break;
            
            cur = 1LL * 10 * cur + (s[i+j] - '0');
            
            if( cur > 0 and cur <= k ){
                
                ans += solve( i+j+1, s, k );
                ans %= mod;

            }
            
        }
        
        return dp[i] = ans;
        
    }
    
    int numberOfArrays(string s, int k) {
        
        
        for(int i=0;i<(int)s.size();i++){
            dp[i] = -1;
        }
        
        return solve(0,s,k);
        
    }
};
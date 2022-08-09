class Solution {
public:
    
    int dp[1000][1000];
    
    bool solve(int i, int j, string &s){
        
        if( i>=j ) {
            return true;
        }
        
        if( dp[i][j] != -1 ) return dp[i][j];
        
        bool ans = ( ( s[i] == s[j] ) and ( solve(i+1,j-1,s) ) );
        
        return  dp[i][j] = ans;
    }
    
    string longestPalindrome(string s) {
        
        int n = (int) s.size();
        
        int ans = 0;
        
        for(int i=0;i<n;i++) for(int j=0;j<n;j++) dp[i][j] = -1;
        
        for(int i=0;i<n;i++) 
        {
            for(int j=0;j<n;j++) 
            {
                if( solve( i, j, s ) ){
                    ans = max(ans, j-i+1 );
                }
            }
        }
        
        // cout << ans << endl;
        
        for(int i=0;i<n;i++){
            
            for(int j=0;j<n;j++){
                
                if( dp[i][j] and ( j-i+1 == ans ) ) {
                    
                    return s.substr(i,ans);
                    
                }
                
            }
            
        }
        
        return "";
    }
};

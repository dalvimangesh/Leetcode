class Solution {
public:
    
    int dp[5000][4][4][4];
    
    int mod;
    
    int solve( int cur, int n, int c1 = 0, int c2 = 0, int c3 = 0){
        
        if(cur>=n) return 1;
        
        if( dp[cur][c1][c2][c3] != -1 ){
            return dp[cur][c1][c2][c3];
        }
        
        int ans = 0;
        
        for(int i=1;i<=3;i++) {
            
            for(int j=1;j<=3;j++) {
                
                for(int k=1;k<=3;k++) {
                    
                    if( i==j or k==j ) continue;
                    
                    if( i==c1 or j==c2 or k==c3 ) continue;
                    
                    ans = (ans + solve( cur+1,n,i,j,k )%mod)%mod;
                    ans %= mod;
                    
                }
                
            }
            
        }
        
        return dp[cur][c1][c2][c3] = ans;
        
    }
    
    
    int numOfWays(int n) {
        
        mod = 1e9 + 7;
        
        for(int i=0;i<n;i++) for(int j=0;j<=3;j++) for(int k=0;k<=3;k++) for(int l=0;l<=3;l++) dp[i][j][k][l] = -1;
        
        // memset(dp,-1,sizeof(dp));
        
        return solve(0,n);
        
    }
};




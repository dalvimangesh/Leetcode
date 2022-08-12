class Solution {
public:
    
    int dp[(1<<16)+1];
    
    int solve( int i,  int &mask , int n){
        
        if( i==(n+1) ){
            return 1;
        }
        
        int ans = 0;
        
        if( dp[mask] != -1 ){
            
            return dp[mask];
            
        }
        
        for(int j=1;j<=n;j++){
            
            if( ( mask >> j ) & 1 ) continue;
            
            if( ( i % j == 0 ) or ( j % i == 0) ){
                
                mask |= (1<<j);
                
                ans += solve(i+1,mask,n);
                
                mask = (mask & (~( 1 << j ) ) );
                
            }
            
        }
        
        return  dp[mask] = ans;
    }
    
    
    int countArrangement(int n) {
        
        int num = 0;
        
        memset(dp,-1,sizeof(dp));
        
        return solve( 1, num , n );
        
    }
};

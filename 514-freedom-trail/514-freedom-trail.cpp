class Solution {
public:
    
    int dp[100][100];
    
    int solve(int i,int j, string &ring, string& key){
        
        if( j==(int)key.size() ){
            return 0;
        }
        
        if(dp[i][j]!=-1) return dp[i][j];
        
        int ans = 1e9;
        
        int n = (int) ring.size();
        
        for(int k=0;k<n;k++){
            
            if( ring[k] == key[j] ){
                
                ans = min(ans, min( abs(i-k) , n - abs(i-k) ) + 1 + solve( k , j + 1, ring, key ) );
                
            }
            
        }
        
        return dp[i][j] = ans;
        
    }
    
    int findRotateSteps(string ring, string key) {
        
        for(int i=0;i< (int) ring.size() ;i++) for(int j=0;j<(int)key.size();j++) dp[i][j]=-1;
        
        return solve( 0, 0, ring, key );
        
    }
};




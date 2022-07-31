class Solution {
public:
    
    int dp[501][501];
    
    int solve( int i, int j, string &word1, string &word2 ){
        
        int n = (int) word1.size();
        int m = (int) word2.size();
        
        if(i==n and j==m){
            return 0;
        }
        
        if( j == m ){
            return (n - i );
        }
        
        if( i == n){
            return (m - j );
        }
        
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        
        int ans = (1e8);
        
        if( word1[i] == word2[j] ){
            ans = solve( i+1, j+1, word1,word2 );
        }
        else{
            // inserting a character
            ans = min( ans , 1 + solve( i,j+1,word1,word2) );

            // replacing the character
            ans = min(ans, 1 + solve(i+1,j+1,word1,word2) );

            // deleting the character
            ans = min( ans, 1 + solve( i+1, j, word1, word2 ));
        }
        return dp[i][j] =  ans;
    }
    
    int minDistance(string word1, string word2) {
        
        int n = (int) word1.size();
        int m = (int) word2.size();
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                dp[i][j]=-1;
            }
        }
        
        return solve( 0,0,word1,word2);   
        
    }
};


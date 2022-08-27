class Solution {
public:
    
    int solve( vector<int> &v , int k ) {
        
        int n = (int) v.size();
        
        vector<int> prefix(n+1, 0);
        
        for( int i = 1; i <= n; i++ ) {
            prefix[i] = prefix[i-1] + v[i-1];
        }
        
        int ans = -1e8;
        
        for( int  i = 1; i <= n ; i++ ){
            
            for( int j = i; j <= n ; j++ ) {
                
                int sum = prefix[j] - prefix[i-1];
                
                if(sum <= k){
                    ans = max(ans, sum );
                }
                
            }
            
        }
        
        return ans;
    }
    
    
    int maxSumSubmatrix(vector<vector<int>>& matrix, int k) {
        
        int n = (int) matrix.size();
        
        int m = (int) matrix[0].size();
        
        int ans = -1e8;
        
        for( int i = 0; i < n; i++ ) {
            
            vector<int> prefix(m,0);
            
            for( int j = i ; j < n; j++ ) {
                    
                for(int k = 0; k < m; k++ ) {
                    
                    prefix[k] += matrix[j][k];
                    
                }            
                
                ans = max(ans, solve(prefix , k) );
                
            }
            
        }


        
        return ans;
    }
};


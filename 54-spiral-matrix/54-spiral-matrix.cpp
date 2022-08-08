class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        int n = matrix.size();
        int m = matrix[0].size();
        
        int toRight = 0, toDown = m-1, toLeft = n-1, toUp = 0;
        
        vector<int> ans;
        
        while( (toRight <= toLeft) and (toUp <= toDown ) ){
            
            for( int i = toUp; i<= toDown; i++ ){
                ans.push_back( matrix[toRight][i] );
            }
            
            
            for( int i=toRight+1;i<=toLeft;i++){
                ans.push_back( matrix[i][toDown] );
            }
            
            
            for( int i=toDown-1;i>=toUp;i-- ){
                
                if( toLeft <= toRight ) break;
                
                ans.push_back( matrix[toLeft][i] );
            }
            
            for(int i=toLeft-1;i>=toRight+1;i--){
                
                if( toUp >= toDown ) break;
                
                ans.push_back(matrix[i][toUp]);
            }
            
            
            toRight++; toUp++; toDown--; toLeft--;
            
        }
        
        return ans;
    }
};

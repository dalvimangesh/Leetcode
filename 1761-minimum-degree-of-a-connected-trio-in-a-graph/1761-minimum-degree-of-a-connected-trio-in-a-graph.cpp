class Solution {
public:
    int minTrioDegree(int n, vector<vector<int>>& edges) {
        
        vector< vector<int> > adjmatrix(n+1,vector<int>(n+1,0));
        
        vector<int>degree(n+1,0);
        
        for(auto edge:edges){
            adjmatrix[edge[0]][edge[1]]++;
            adjmatrix[edge[1]][edge[0]]++;
            degree[edge[0]]++;
            degree[edge[1]]++;
        }
        
        int res = INT_MAX;
        
        for(int i=1;i<=n;i++){
            
            for(int j=i+1;j<=n;j++){
                
                for(int k=j+1;k<=n;k++){
                    
                    if(  adjmatrix[i][j] and adjmatrix[j][k] and adjmatrix[k][i] ){
                        
                        res = min(res, degree[i]+degree[j]+degree[k] - 6  );
                        
                    }
                    
                }
                
            }
            
        }
        
        if(res==INT_MAX) res=-1;
        return res;
    }
};





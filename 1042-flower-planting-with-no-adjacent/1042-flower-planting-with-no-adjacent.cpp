class Solution {
public:
    
    void solve( int vertex ,vector<int> g[] , vector<int> &color) {
        
        set<int> s;
        
        for(int i=1;i<=4;i++) s.insert(i);
        
        for(int nbr:g[vertex]) {
            
            if( color[nbr-1] != 0 ) {
                
                s.erase( color[nbr -1 ] );
                
            }
        }
        
        color[vertex - 1] = *s.begin();
        
        for(int nbr:g[vertex]){
            
            if( color[nbr - 1] == 0 ) {
                
                solve( nbr, g, color );
                
            }
            
        }
        
        return;
    }
    
    
    vector<int> gardenNoAdj(int n, vector<vector<int>>& paths) {
        
        vector<int> g[n+1];
        
        for( vector<int> edge: paths ) {
            g[edge[0]].push_back(edge[1]);
            g[edge[1]].push_back(edge[0]);
        }
        
        vector<int> color(n,0);
        
        for(int i=1;i<=n;i++){
            
            if( color[i-1] == 0 ) solve( i, g, color );
            
        }
        
        return color;
        
    }
};
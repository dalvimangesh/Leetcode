class Solution {
public:
    int trapRainWater(vector<vector<int>>& grid) {
        
        int R = grid.size(), C = grid[0].size();
        
        priority_queue<pair<int,pair<int,int> >, vector<pair<int,pair<int,int> > > , greater< pair<int,pair<int,int> > > > pq;
        
        vector<vector<bool> > visited(R,vector<bool>(C,false));
        
        for(int i=0;i<R;i++){
            for(int j=0;j<C;j++){
                
                if(i==(R-1) or j==(C-1) or i==0 or j==0){
                    pq.push({grid[i][j],{i,j}});
                    visited[i][j]=true;
                }
                
            }
        }
        
        int ans = 0;
        
        int currentHeight = 0;
        
        int dx[4] = {1,0,0,-1};
        int dy[4] = {0,1,-1,0};
        
        while(pq.size()){
            
            auto ele = pq.top(); pq.pop();
            auto [x,y] = ele.second;
            int height = ele.first;
            currentHeight = max(currentHeight,height);
            
            for(int i=0;i<4;i++){
                
                int newx = x + dx[i];
                int newy = y + dy[i];
                
                if(newx>=R or newy>=C or newx<0 or newy<0 or visited[newx][newy]) continue;
                
                if( grid[newx][newy] < currentHeight ){
                    ans += currentHeight - grid[newx][newy];
                }
                
                pq.push({grid[newx][newy],{newx,newy}});
                visited[newx][newy]=true;
                
            }
            
        }
        
        return ans;
        
    }
};
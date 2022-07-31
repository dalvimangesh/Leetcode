class Solution {
public:
    
    stack<int> s;
    
    vector<bool> visited;
    
    int cnt = 0;
    
    void dfs( int vertex, vector<int> g[]){
        cnt++;
        visited[vertex] = true;
        for(int nbr:g[vertex]){
            if(visited[nbr]==false){
                dfs( nbr, g );
            }
        }
        s.push(vertex);
    }
    
    int longestCycle(vector<int>& edges) {    
        visited.resize(100001,false);
        int n = (int) edges.size();
        vector<int> g[n],rg[n];
        for(int i=0;i<n;i++){
            if(edges[i]!=-1){
                g[i].push_back(edges[i]);
                rg[edges[i]].push_back(i);
            }
        }
        
        for(int i=0;i<n;i++){
            if(visited[i]==false){
                dfs(i,g);
            }
        }
        visited.clear();
        visited.resize(100001,false);
        int ans = 0;
        while(s.size()){
            int ele = s.top(); s.pop();
            if(visited[ele]) continue;
            cnt = 0;
            dfs(ele,rg);
            ans = max(ans,cnt);
        }
        if(ans==1) ans=-1;
        return ans;
    }
};
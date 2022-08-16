class Solution {
    int parent[100001];
    int area[100001];
public:
    
    Solution(){
        for(int i=0;i<100001;i++){
            parent[i] = i;
            area[i] = 1;
        }
    }
    
    int find( int root ) {
        if( parent[root] == root ) return root;
        return parent[root] = find(parent[root]);
    }
    
    void join( int u, int v ) {
        
        int p1 = find(u);
        int p2 = find(v);
        
        if(p1==p2){
            return;
        }
        
        int s1 = area[ find(u) ];
        int s2 = area[ find(v) ];
        
        if( s1>=s2 ) {
            parent[p2] = p1;
            area[p1] += area[p2];
        }
        else{
            parent[ p1 ] = p2;
            area[p2] += area[p1];
        }
    }
    
    int largestComponentSize(vector<int>& nums) {
        
        int n = (int) nums.size();
        
        int ans = 0;
        
        for(int i=0;i<n;i++) {
            
            // cout << nums[i] << endl;
            
            for(int j=2; j*j <= nums[i]; j++) {
                    
                    if( nums[i] % j == 0 ) {
                        
                        join( nums[i], j );
                        
                        join( nums[i], nums[i]/j );
                        
                        // cout << j << " " << nums[i]/j << endl;
                        
                        
                    }
            }
            
        }
        
        map<int,int> m;
        
        for(int ele:nums) {
            
            int x = find(ele);
            
            // cout << x << endl;
            
            m[x]++;
            
            ans = max(ans, m[x]);
            
        }
        
        
        return ans;
    }
};



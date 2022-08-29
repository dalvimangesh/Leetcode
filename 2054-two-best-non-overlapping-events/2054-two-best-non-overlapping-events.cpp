class Solution {
public:
    int maxTwoEvents(vector<vector<int>>& events) {
        
        int n = events.size();
        
        vector<int> val(n,0);
        
        vector< vector<int> > v = events;
        
        sort(v.begin(),v.end());
        
        for(int i = n-1; i>=0; i--){
            if( i == (n-1) ){
                val[i] = v[i][2];
            }
            else {
                val[i] = max(val[i+1],v[i][2]);
            }
            
            // cout << val[i] << " ";
        }
        
        // cout << endl;
        
        int ans = 0;
        
        for( int i = 0; i < n; i++ ) {
            
            int cur = v[i][2];
            
            int index = lower_bound( v.begin() , v.end() , vector<int> { v[i][1]+1, 0 , 0 } ) - v.begin();
            
            if( index>=n ){
                ans = max(ans,cur);
                continue;
            }
            
            cur += val[index];
            
            ans = max(ans,cur);
            
        }
        
        return ans;
        
    }
};
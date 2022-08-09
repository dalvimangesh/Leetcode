class Solution {
public:
    int minTaps(int n, vector<int>& ranges) {
        
        vector<pair<int,int> > v;
        
        for(int i=0;i<=n;i++){
            
            int l = max(0, i - ranges[i] );
            int r = min(n, i + ranges[i] );
            
            v.push_back( { l,r } );
            
        }
        
        sort( v.begin(), v.end() );
        
        int index = 0;

        int min = 0;
        
        int ans = 0;
        
        while( index <= n and min < n ){
            
            int val = 0;            
            
            while(index <= n and  ( v[index].first <= min  ) ){
                val = max(val, v[index].second );
                index++;
            }
            
            ans++;
            
            if(min>=n) {
                return ans;
            }
            
            if(min == val){
                
                return -1;
            }
            
            min = val;
        }
        
        return ans;
    }
};



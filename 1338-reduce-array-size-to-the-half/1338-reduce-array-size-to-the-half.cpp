class Solution {
public:
    int minSetSize(vector<int>& arr) {
        
        int n = (int) arr.size();      
        
        map<int,int> m;
        
        for(int i=0;i<n;i++) {
            m[arr[i]]++;
        }
        
        vector<pair<int,int> > v;
        
        for( pair<int,int> p:m ) {
             v.push_back( { p.second, p.first } );
        }
        
        sort( v.begin(), v.end(), greater< pair<int,int> > () );
        
        int cnt = n;
        int ans = 0;
        
        for(int i=0;i< (int) v.size();i++) {
            
            if( cnt <= ( n/2 ) ) {
                continue;
            }
            
            cnt -= v[i].first;
            ans++;
            
        }
        
        
        return ans;
        
    }
};




class Solution {
public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
       
        int mod = (1e9 + 7);
        
        vector<pair<int,int> > v;
        
        for( int i=0; i<n ; i++ ){
            
            v.push_back( {efficiency[i], speed[i]} );
            
        }
        
        sort( v.begin(), v.end(), greater<pair<int,int> > () );
        
        priority_queue<int, vector<int> , greater<int> > pq;  // min heap
        
        long long sum = 0;
        
        long long ans = 0;
        
        
        for(int i=0;i<n;i++){
            
            // cout << v[i].first << " " << v[i].second << endl;
            
            if( pq.size() < (k-1) ){
                
                sum += v[i].second;
                
                long long val = 1LL * sum * (v[i].first);
                
                ans = max(ans,val);
                
                pq.push( v[i].second );
                
            }
            
            else {
                
                long long cur = sum + 1LL * v[i].second;
                
                long long val = 1LL * cur * ( v[i].first );
                
                // cout << sum << endl;
                
                ans = max( ans, val );
                
                if( pq.size() and pq.top() < v[i].second ){
                    sum -= pq.top();
                    sum += v[i].second;
                    pq.pop();
                    pq.push(v[i].second);
                }
            }
            
        }
        
        return ans % mod;
        
    }
};


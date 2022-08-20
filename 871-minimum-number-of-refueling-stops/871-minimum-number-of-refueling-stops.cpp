class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        
        stations.push_back( { target, 0} );
        
        sort( stations.begin(), stations.end() );
        
        int cur = startFuel;
        
        int pos = 0;
        
        priority_queue< int > pq;
        
        int ans = 0;
        
        for( vector<int> v:stations ) {
            
            int diff = v[0] - pos;
            
            if( diff > cur ) {
                
                while( (int) pq.size() and diff > cur ){
                
                    cur += pq.top();
                
                    pq.pop();
                    
                    ans++;
                }
                
                if( diff > cur ) {
                    return -1;
                }
                
            }
            
            pq.push( v[1] );
            
            pos = v[0];
            
            cur -= diff;
            
            if(pos==target){
                break;
            }
        }
        
        return ans;
        
    }
};
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        // distance, element
        
        priority_queue < pair<int,int> > pq;
        
        for( int ele:arr ) {
            
            if( (int) pq.size() < k ) {
                
                pq.push( { abs( ele - x ) , ele } );
                
            }
            
            else {
                
                int diff = abs( ele - x );
                if( diff < (int) pq.top().first ) {
                    
                    pq.pop();
                    
                    pq.push({ diff, ele });
                    
                }
            }
            
        }
        
        vector<int> ans;        
        
        while( (int) pq.size()){
            
            ans.push_back( pq.top().second ); pq.pop();
            
        }
        
        sort(ans.begin(),ans.end());
        return ans;
    }
};




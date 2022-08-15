class Solution {
    
    int parent[100001];
    
    int area[100001];
    
public:
    
    int find( int vertex ) {
        if( parent[vertex] == vertex ) return vertex;
        return ( parent[vertex] = find( parent[vertex] ) );
    }
    
    void join( int u, int v ) {
        
        int p1 = find(u);
        int p2 = find(v);
        
        if( p1 == p2 ) return;
        
        int s1 = area[p1];
        int s2 = area[p2];
        
        if( s1 >= s2 ) {
            parent[p2] = p1;
            area[p1] += area[p2];
        }
        else{
            parent[p1] = p2;
            area[p2] += area[p1];
        }
        
    }
    
    int findLatestStep(vector<int>& arr, int m) {
        
        int n = (int) arr.size();
        
//         for(int i=0;i<=n;i++){
            
//             parent[i] = i;
//             area[i] = 1;
            
//         }
        
        vector<int> v(n+2,0);
        
        int ans = -2;
        
        multiset<int> ms;
        
//         v[ arr[0] ] = 1;
//         ms.insert(1);
        
//         if( ms.find(m) != ms.end()){
//             ans = 0;
//         }
        
        for(int i=0;i<n;i++){
            
            int pos = arr[i];
            
            parent[pos] = pos;
            area[pos] = 1;
            ms.insert(1);
            
            v[pos] = 1;

            
            // cout << i << endl;
            
            if( v[pos-1] == 1 ) {
                
                ms.erase( ms.find( area[ find( arr[i] ) ] ) );
                
                ms.erase( ms.find( area[ find( pos-1 ) ] ) );
                
                join( pos, pos-1 );
                
                ms.insert( area[ find( pos ) ] );
                
            }
            
            if( v[ pos+1 ] == 1 ){
                                
                ms.erase( ms.find( area[ find( arr[i] ) ] ) );
                
                ms.erase( ms.find( area[ find( pos + 1 ) ] ) );
                
                join( pos, pos+1 );
                
                ms.insert( area[ find( pos ) ] );
                
            }
            
            
            if( ms.find( m ) != ms.end() ) {
                ans = i;
            }
            
        }
        
        return ans+1;
        
    }
};




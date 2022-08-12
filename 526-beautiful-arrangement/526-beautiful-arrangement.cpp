class Solution {
public:
    
    int solve( int i, map<int,vector<int> > &m , set<int> &s ,int n){
        
        if( i==(n+1) ){
            return 1;
        }
        
        int ans = 0;
        
        for( int ele:m[i] ){
            
            if( ( s.find(ele) == s.end() )  ) {
                s.insert(ele);
                ans += solve(i+1, m, s ,n);
                s.erase(ele);
            }
            
        }
        
        return ans;
    }
    
    
    int countArrangement(int n) {
        
        map<int,vector<int> > m;
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if( (i % j == 0) or (j % i == 0) ){
                    m[i].push_back(j);
                    // cout << j << " ";
                }
            }
            // cout << endl;
        }
        
        set<int> s;
        
        return solve( 1, m, s, n );
        
    }
};




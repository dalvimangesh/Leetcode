class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        
#define int long long
        
        sort(arr.begin(),arr.end());
        
        map<int, int> pos;
        
        int ans = 0 ; int mod = 1e9 + 7;
        
        int n = (int) arr.size();
        
        for(int i=0; i<n; i++) {
            
            int num = arr[i];
            
            int cur = 0;
            
            for(int j=1;j*j<=num;j++) {
                
                if( num % j == 0 ){
                    
                    int temp = ( 1LL * pos[j] * pos[ num/j ] ) % mod;
                    
                    cur += temp ;
                    
                    if( j != (num/j) ) {
                        
                        cur += temp;
                        
                        cur %= mod;
                        
                    }
                    
                }
                
            }
            
            pos[num] = cur + 1LL;
            pos[num] %= mod;
            
            ans += pos[num];
            ans %= mod;
            
        }
        
        return ans;

#undef int
        
    }
};
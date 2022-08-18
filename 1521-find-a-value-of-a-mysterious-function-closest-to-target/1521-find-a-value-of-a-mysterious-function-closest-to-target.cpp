class Solution {
public:
    int closestToTarget(vector<int>& arr, int target) {
        
        set<int> s;
        
        int n = (int) arr.size();
        
        int ans = (1e8);
        
        for(int i=0; i < n; i++ ) {
            
            set<int> temp;
            
            temp.insert(arr[i]);
            
            for(int ele:s){
                temp.insert( (ele & arr[i]) );
            }
            
            for(int ele:temp){
                
                ans = min(ans, abs(ele - target) );
                
            }
            
            s = temp;
        }
        
        return ans;
    }
};



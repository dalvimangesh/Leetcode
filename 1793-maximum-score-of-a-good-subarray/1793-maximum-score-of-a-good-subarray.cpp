class Solution {
public:
    int maximumScore(vector<int>& nums, int k) {
        
        // we can assume current number is the mininum number in the given subarray
        
        int n = (int) nums.size();
        
        vector<int> left(n),right(n);
        
        stack<int> s;
        
        for(int i=0;i<n;i++){
            
            if( i == 0 ){
                left[i] = -1; 
                s.push(i);
            }
            else{
                
                while(s.size() and  nums[i]<=nums[s.top()]){
                    s.pop();
                }
                
                if(s.size()){
                    left[i] = s.top();
                }
                else{
                    left[i] = -1;
                }
                s.push(i);
            }
        }
        
        while(s.size()) s.pop();
        
        for(int i=n-1;i>=0;i--){
            if( i == n-1 ){
                right[i] = n;
                s.push(i);
            }
            else{
                
                while(s.size() and nums[i]<=nums[s.top()]){
                    s.pop();
                }
                if(s.size()){
                    right[i] = s.top();
                }
                else{
                    right[i] = n;
                }
                s.push(i);
            }
        }
        
        int ans = INT_MIN;
        k++;
        for(int i=0;i<n;i++){
            int index1 = left[i] + 1;
            int index2 = right[i] + 1;
            
            if(  (index1 < k) and (k<index2) ){
                
                ans = max(ans, nums[i] * ( index2 - index1 - 1)  );
                
            }
            
        }
        
        return ans;
        
    }
};



class Solution {
public:
    long long minimumReplacement(vector<int>& nums) {
        
        int n = (int) nums.size();
        
        long long ans = 0;
        
        int prev = nums[n-1];
        
        for(int i=n-2;i>=0;i--){
            
            
            if( nums[i] > prev ){
                
                int num = nums[i] / prev;
                
                if( nums[i] % prev ) num++;
                
                ans += (num - 1LL);
                
                prev = nums[i]/num;
                
                
            }
            else {
                prev = nums[i];
            }
            
        }
        
        
        return ans;
        
    }
};




class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
        
        int n = (int) nums.size();
        
        vector<int> prefix(n+1, 0);
        
        int flips = 0, ans = 0;
        
        for(int i=0;i<n;i++){
            
            flips += prefix[i];
            
            if( ( flips & 1 ) and (nums[i]==0) ){
                continue;
            }
            
            if( ( ( flips & 1  ) == 0 ) and ( nums[i]==1 ) ){
                continue;
            }
            
            if( i+k > n ){
                return -1;
            }
            
            prefix[i+k] = -1;
            flips++;
            ans++;
        }
        
        return ans;
    }
};



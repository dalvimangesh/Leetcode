class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
        int n = (int) nums.size();
        
        vector<int> dp(n+1, (1e8) );
        
        dp[0] = -(1e8);
        
        for(auto ele:nums){
            
            vector<int>::iterator pos = upper_bound( dp.begin(), dp.end(),ele);
            
            int len = pos - dp.begin();
            
            if( dp[ len - 1 ] < ele and ele < dp[ len ] ){
                dp[ len ] = ele;
            }
        }
        
        int cnt;
        
        for(int i=0;i<=n;i++){
            if(dp[i]!=(1e8)){
                cnt = i;
            }
        }
        
        return cnt;
        
    }
};
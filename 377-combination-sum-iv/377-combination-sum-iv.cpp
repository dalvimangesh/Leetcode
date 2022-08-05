class Solution {
public:
    
    int dp[1001];
    
    int solve(int target, vector<int> &nums ){
        
        if(target == 0){
            return 1;
        }
        
        if(dp[target]!=-1){
            return dp[target];
        }
        
        int ans = 0;
        
        for(int i=0;i<(int) nums.size();i++){
             if( target - nums[i] >=0 ){
                ans += solve( target-nums[i] , nums );
            }   
        }
        return dp[target] = ans;
    }
    
    int combinationSum4(vector<int>& nums, int target) {
        
        memset(dp,-1,sizeof(dp));
        
        return solve( target, nums );
        
    }
};



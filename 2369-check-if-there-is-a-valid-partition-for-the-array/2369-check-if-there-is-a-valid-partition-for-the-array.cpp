class Solution {
public:
    
    int dp[100001];
    
    bool solve( int i, vector<int> &nums ){
        
        int n = (int) nums.size();
        
        if( i==n ){
            return true;
        }
        
        if( dp[i] != -1 ){
            return dp[i];
        }
        
        bool res = false;
        
        if( i+1<n and nums[i]==nums[i+1] ){
            
            res |= solve( i+2, nums );
            
            if( i+2<n and nums[i+1]==nums[i+2] ){
                
                res |= solve(i+3, nums);
                
            }
            
        }
        
        if( i+2 < n and  nums[i+1]-nums[i]==1 and nums[i+2]-nums[i+1]==1  ){
            
            res |= solve(i+3,nums);
            
        }
        
        
        return  dp[i] = res;
        
    }
    
    
    
    bool validPartition(vector<int>& nums) {
        
        for(int i=0;i<nums.size();i++) dp[i] = -1;
        
        return solve(0,nums);
       
    }
};



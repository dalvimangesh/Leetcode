class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int>result;
        int ans=-1;
        int low = 0,high=nums.size()-1;
        while(high>=low){
            int mid = (low+high)/2;
            if(nums[mid]==target){
                ans=mid;
                high=mid-1;
            }
            else if(nums[mid]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        result.push_back(ans);
        low=0;
        high=nums.size()-1;
        while(high>=low){
            int mid = (high+low)/2;
            if(nums[mid]==target){
                ans=mid;
                low=mid+1;
            }else if(nums[mid]>target){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        result.push_back(ans);
        return result;
    }
};
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int n = (int) nums.size();
        
        int i = 0;
        
        int j = n-1;
        
        vector<pair<int,int> > temp(n);
        
        for(int i=0;i<n;i++){
            temp[i] = { nums[i], i };
        }
        
        sort(temp.begin(),temp.end());
        
        while(i<j){
            
            int sum = temp[i].first + temp[j].first;
            
            if(sum == target){
                return { temp[i].second , temp[j].second };
            }
            else if( sum < target ){
                i++;
            }
            else{
                j--;
            }
        }
        
        return {};
        
    }
};

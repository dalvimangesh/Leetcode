class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        int n = (int) nums.size();
        
        sort( nums.begin(), nums.end() );
        
        vector<vector<int> > ans;
        
        for( int i=0; i<n; i++) {
            
            for( int j=i+1; j<n; j++) {
                
                int l = j+1;  int r = n-1;
                
                long long req = (long long)target - (long long)nums[i] - (long long)nums[j];
                
                while( l < r ) {
                    
                    if(  (long long) nums[l] +  (long long) nums[r] == req ) {
                        
                        ans.push_back( { nums[i], nums[j], nums[l], nums[r] } );
                        
                        while( l+1<n and nums[l] == nums[l+1] ){
                            l++;
                        }
                        l++;
                        
                        while( r>l and nums[r-1]==nums[r] ){
                            r--;
                        }
                        r--;
                        
                    }
                    else if( nums[l] + nums[r] > req ) {
                        r--;
                    }
                    else{
                        l++;
                    }
                    
                }
                
                while( j+1<n and nums[j]==nums[j+1] ){
                    j++;
                }
                
            }
            while( i+1 < n and nums[i] == nums[i+1] ) {
                i++;
            }
            
        }
        
        return ans;
        
    }
};

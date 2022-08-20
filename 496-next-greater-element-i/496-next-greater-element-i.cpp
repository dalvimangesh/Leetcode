class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        stack<int> s;
        
        map<int,int> m;
        
        int n = (int) nums2.size();
        
        for( int i = n-1; i >= 0; i-- ) {
            
            while( s.size() and s.top() <= nums2[i] ) {
                s.pop();
            }
            
            if(s.size()){
                m[ nums2[i] ] = s.top();
            }
            else{
                m[ nums2[i] ] = -1;
            }
            
            s.push(nums2[i]);
            
        }
        
        vector<int> ans;
        
        for(int ele:nums1) {
            ans.push_back( m[ele] );
        }
        
        return ans;
    }
};
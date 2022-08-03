class Solution {
public:
    
    vector<vector<int> > ans;
    
    void solve( vector<int> &v, vector<int> &nums,map<int,bool> &m)
    {
        
        if( (int) v.size() == (int)nums.size() ){
            ans.push_back(v);
            return;
        }
        
        for(int i=0;i<(int)nums.size();i++)
        {
            if(m[nums[i]]==false){
                v.push_back(nums[i]);
                m[nums[i]]=true;
                solve(v,nums,m);
                m[nums[i]]=false;
                v.pop_back();   
            }
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<int> v;
        map<int,bool>m;
        for(auto x:v){
            m[x]=false;
        }
        solve(v,nums,m);
        return ans;
    }
};
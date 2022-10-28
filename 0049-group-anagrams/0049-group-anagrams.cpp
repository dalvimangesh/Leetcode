class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<pair<string,string> > v;
        
        for(auto s:strs){
            string dummy = s;
            sort(s.begin(),s.end());
            v.push_back({s,dummy});
        }    
        sort(v.begin(),v.end());
        
        vector<string> cur;
        string s = v[0].first;
        
        vector<vector<string> > ans;
        
        for(int i=0;i<v.size();i++){
            if(v[i].first==s){
                cur.push_back(v[i].second);
            }
            else{
                ans.push_back(cur);
                cur.clear();
                s = v[i].first;
                cur.push_back(v[i].second);
            }
        }
        ans.push_back(cur);
        return ans;
    }
};
class Solution {
    
    map<char,string> m;
    
public:
    
    Solution() {
        m['2'] = "abc"; m['3'] = "def"; m['4'] = "ghi"; m['5'] = "jkl"; m['6'] = "mno";m['7'] = "pqrs"; m['8'] = "tuv"; m['9'] = "wxyz";
    }
    
    vector<string> ans;
    
    void solve(int i, string& digits, string &s ){
        
        if( i == (int) digits.size() ) {
            if(s!="")   ans.push_back(s);
            return;
        }
        
        for(auto c:m[digits[i]]) {
            s.push_back(c);
            solve( i+1, digits, s );
            s.pop_back();
        }
        return;
    }
    
    
    vector<string> letterCombinations(string digits) { 
    
        string s = "";
        
        solve( 0 , digits, s );
        
        return ans;
        
    }
};
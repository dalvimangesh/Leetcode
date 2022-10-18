class Solution {
public:
    
    string get( const string &s ){
        int i=0, n = (int) s.size();
        string ans = "";
        while(i<n){
            int cnt=1;
            char cur = s[i];
            while( i+1<n and s[i] == s[i+1] ){
                cnt++;
                i++;
            }
            ans+=to_string(cnt);
            ans.push_back(cur);
            i++;
        }
        return ans;
    }
    
    string solve( int i, int n, string &ans ){
        if( i==n ){
            return ans;
        }
        ans = get(ans);
        return solve(i+1,n,ans);
    }
    
    string countAndSay(int n) {
        
        string s = "1";
        
        return solve( 1, n, s );
        
    }
};

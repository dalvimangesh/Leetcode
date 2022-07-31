class Solution {
public:
    
    int res;
    
    int half;
    
    vector<vector<int> > dp;
    
    int solve(int i,int j, string &s){
        
        if( i>j ){
            return 0;
        }
        if( i == j ){
            return 1;
        }
        
        if( dp[i][j]!=-1 ){
            return dp[i][j];
        }
        
        int ans;
        if( s[i]==s[j] ){
            ans = 2 + solve(i+1,j-1,s);
            if( i < half and j>=half ){
                res=max(res,ans);
            }
        }
        else{
            ans = max( solve(i+1,j,s) , solve(i,j-1,s) );
        }
        return  dp[i][j] = ans;
    }
    
    
    int longestPalindrome(string word1, string word2) {
        
        half = word1.size();
        
        string newstring = word1 + word2;
        
        dp.resize( newstring.size(), vector<int>( newstring.size() , -1 ) );
        
        solve( 0, newstring.size()-1, newstring );
        
        return res;
    }
};

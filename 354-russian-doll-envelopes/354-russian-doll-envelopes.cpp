bool cmp( const vector<int> &v1, const vector<int> &v2){
    
    if( v1[0] < v2[0] ){
        return true;
    }
    else if(v1[0] > v2[0] ){
        return false;
    }
    else{
        if( v1[1] > v2[1] )  return true;
        return false;
    }
    
}


class Solution {
public:
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        
        sort(envelopes.begin(),envelopes.end(),cmp);
        
        int n = (int) envelopes.size();
        
        vector<int>dp(n+1,(1e8));
        
        dp[0] = -(1e8);
        
        for(int i=0;i<n;i++){
            int index = upper_bound(dp.begin(),dp.end(), envelopes[i][1]) - dp.begin();
            if( dp[index-1] < envelopes[i][1] and  envelopes[i][1] < dp[index] ){
                dp[index] = envelopes[i][1];
            }
        }
        int cnt = 0;
        for(int i=1;i<=n;i++){
            if(dp[i]!=(1e8)) cnt++;
        }
     
        return cnt;
        
    }
};

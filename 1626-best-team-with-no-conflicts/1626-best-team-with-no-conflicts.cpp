// bool cmp( const pair<int,int> a, const pair<int,int> b ) {

//     if( a.first == b.first ){
//         return a.second >= b.second;
//     }
//     return a.first <= b.first;
// }


class Solution {
public:
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        
        int n = (int) ages.size();
        
        vector<pair<int,int> > info;
        
        for(int i=0;i<n;i++) {
            info.push_back({ages[i],scores[i]});
        }
        
        sort( info.begin(), info.end());
        
        vector<int>dp(n+1,INT_MAX);
        
        dp[0] = INT_MIN;
        
//         for(int i=0;i<n;i++){
//             vector<int>::iterator itr = upper_bound(dp.begin(),dp.end(),info[i].second);
            
//             int len = itr - dp.begin();
            
//             if( ( dp[len] > info[i].second ) and ( dp[len-1] <= info[i].second ) ){
//                 dp[len] = info[i].second;
//             }
//         }
        
        int ans = 0;
        
//         for(int i=1;i<=n;i++){
//             cout << dp[i] << " ";
//             if(dp[i]!=INT_MAX){
//                 ans+=dp[i];
//             }
//         }
        
        dp.assign(n+1,0);
        
        for(int i=0;i<n;i++){
            for(int j=i;j>=0;j--){
                if( info[i].second >= info[j].second ){
                    dp[i]=max(dp[i],dp[j]+info[i].second);
                }
            }
            ans=max(ans,dp[i]);
        }
        
        return ans;
    }
};

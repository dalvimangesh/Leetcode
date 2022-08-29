class Solution {
public:
    
    int dp[50000];
    
    int solve( int i, const vector<vector<int> > &v) {
        
        int n = (int) v.size();
        
        if(i >= n) {
            return 0;
        }
        
        if( dp[i] != -1 ){
            return dp[i];
        }
        
        int ans = solve(i+1,v);
        
        // vector<int> temp = {v[i][1],0,0};
        
        int next = lower_bound( v.begin(), v.end(), vector<int> {v[i][1],0,0} ) - v.begin();
        
        ans  = max( ans , v[i][2] + solve(next, v) );
        
        return dp[i]  = ans;
        
    }
    
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        
        vector< vector<int> > v;
        
        int n = (int) startTime.size();
        
        for(int i=0;i<n;i++){
            
            v.push_back( { startTime[i], endTime[i], profit[i] } );
            
        }
        
        
        sort(v.begin(),v.end());
        
        for(int i=0;i<n;i++) dp[i] = -1;
        
        return solve( 0, v );
        
    }
};


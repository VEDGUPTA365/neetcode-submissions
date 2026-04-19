class Solution {
public:
    int minCostClimbingStairs(vector<int>& val) {
        int n=val.size();
        vector<int> dp(n+1,0);
        for(int i=2;i<=n;i++){
            dp[i]=min(dp[i-1]+val[i-1],dp[i-2]+val[i-2]);

        }
        return dp[n];
    }
};

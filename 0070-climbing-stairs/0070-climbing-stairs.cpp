class Solution {
public:
    int  solve(int n,vector<int>& dp){
        // base case
        if(n==0){
            return 1;
        }
        if(n<0){
            return 0;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        // return
        dp[n] =  solve(n-1,dp)+solve(n-2,dp);
        return dp[n];
    }
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        int sum = solve(n,dp);
        return sum;
    }
};
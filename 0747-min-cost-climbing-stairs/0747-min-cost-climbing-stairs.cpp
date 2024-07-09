class Solution {
public:
    int findcost(vector<int>&cost,vector<int>& dp,int n){
        if(n==0){
            return cost[0];
        }
        if(n==1){
            return cost[1];
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        dp[n] = min(findcost(cost,dp,n-1),findcost(cost,dp,n-2))+cost[n];
        return dp[n];
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n= cost.size();
        vector<int> dp(n+1,-1);
        int num = min(findcost(cost,dp,n-1),findcost(cost,dp,n-2));
        return num;
    }
};
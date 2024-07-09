class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n= cost.size();
        vector<int> dp(n+1,-1);
        
        if(n==1){
            return cost[0];
        }
        else if(n==2){
            if(cost[1]>cost[0]) return cost[0];
            
            else    return cost[1];
            
        }
        dp[0]=cost[0];
        dp[1]=cost[1];

        for(int i=2;i<n;i++){
           dp[i] = min(dp[i-1],dp[i-2])+cost[i];
        }

        int num = min(dp[n-1],dp[n-2]);
        return num;
    }
};
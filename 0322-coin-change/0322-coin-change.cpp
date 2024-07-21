class Solution {
public:
    int calmincoin(vector<int>&nums,int target,vector<int>&dp){
        if(target==0){
            return 0;
        }
        if(dp[target]!=-1){
            return dp[target];
        }
        int min_coins = INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(target-nums[i]>=0){
                int ans = calmincoin(nums,target-nums[i],dp);
                if(ans!=INT_MAX){
                    min_coins = min(min_coins,ans+1);
                }
            }
        }
        dp[target]=min_coins;
        return dp[target];
    }
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount+1,-1);
        int num = calmincoin(coins,amount,dp);
        return num == INT_MAX ? -1 : num;
    }
};
class Solution {
public:
    int cal(vector<int>& nums,int count,vector<int>& dp){
if(count==0){
        return nums[0];
    }
    if(count<0){
        return 0;
    }
    if(dp[count]!=-1){
        return dp[count];
    }
    int incl = cal(nums,count-2,dp)+nums[count];
    int excl = cal(nums,count-1,dp)+0;
    return dp[count] = max(incl,excl);
}
    
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size()+1,-1);
        return cal(nums,nums.size()-1,dp);
    }
};
class Solution {
public:
    bool cal(vector<int>& nums,int size,int add,int target,vector<vector<int>> &dp){
        if(size==-1){
            if(add!=target) return false;
            else return true;
        }
        if(dp[size][add]!=-1) return dp[size][add];
        bool take = false;
        if(add+nums[size]<=target) take =  cal(nums,size-1,add+nums[size],target,dp);
        bool nottake = cal(nums,size-1,add,target,dp);
        return dp[size][add] = take||nottake;
    }
    bool canPartition(vector<int>& nums) {
       int target=0,take=0;
       for(int i=0;i<nums.size();i++){
        target+=nums[i];
       }
       vector<vector<int>> dp(nums.size(),vector<int>(target+1,-1));
       if(target%2==1) return false;
       else{
        return cal(nums,nums.size()-1,take,target/2,dp);
       }
    }
};
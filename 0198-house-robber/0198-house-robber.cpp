class Solution {
public:
    int get_max(vector<int>&dp){
        int maxi = 0;
        for(int i=0;i<dp.size();i++){
            maxi = max(maxi,dp[i]);
        }
        return maxi;
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n,-1);
        if(n==1){
            return nums[0];
        }
        else if(n==2){
            if(nums[0]>nums[1]){
                return nums[0];
            }
            else{
                return nums[1];
            }
        }
        else{
            dp[0] = nums[0];
            dp[1] = nums[1];
            for(int i=2;i<n;i++){
                int j = 0,maxi=0;
                while(j<i-1){
                    maxi = max(dp[j],maxi) ;
                    j++;
                }
                dp[i] = maxi+nums[i];
            }
        }
        int max_num = get_max(dp);
        return max_num;
    }
};
class Solution {
public:
    int cal(int index,vector<int>& nums,int target,int sum){
        if(index<0){
            if(target==sum) return 1;
            else return 0;
        }
        int addition = cal(index-1,nums,target,sum+nums[index]);
        int subtraction = cal(index-1,nums,target,sum-nums[index]);
        return addition+subtraction;

    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int index = nums.size()-1,sum=0;
        return cal(index,nums,target,sum);
    }
};
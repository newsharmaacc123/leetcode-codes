class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int start =0,last =0;
        int min_num = INT_MAX;
        int sum = 0;
        for(int last=0;last<nums.size();last++){
            sum += nums[last];
            while(sum>=target){
                min_num = min(min_num,last-start+1);
                sum = sum-nums[start];
                start++;
            }
    }
        return min_num == INT_MAX ?0:min_num;
    }
};
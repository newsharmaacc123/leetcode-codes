class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = INT_MIN,currentSum=0;
        int i=0;
        while(i<nums.size()){
            currentSum += nums[i];
            if(currentSum<0){
                i++;
                currentSum = 0;
            }
            else{   
                maxSum = max(maxSum,currentSum);
                i++;
            }
        }
        if(maxSum==INT_MIN){
            sort(nums.begin(),nums.end());
            return nums[nums.size()-1];
        }
        else{
            return maxSum;
        }
        
    }
};
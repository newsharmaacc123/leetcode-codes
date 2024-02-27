class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int number = nums.size();
        vector<int> arr(number+1,-1);
        for(int i =0;i<number;i++){
            arr[nums[i]] = nums[i];
        }
        for(int i=0;i<arr.size();i++){
            if(arr[i]==-1) return i;
        }
        return 0;
    }
};
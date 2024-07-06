class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index =0;
        int count =1;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]!=nums[i]){
                index++;
                nums[index]= nums[i];
                count =1;
            }
            else if(count<2&&nums[i-1]==nums[i]){
                index++;
                nums[index]= nums[i];
                count++;
            }
            
        }
        return index+1;
    }
};
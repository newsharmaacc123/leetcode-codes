class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxposition = 0;
        for(int i=0;i<nums.size();i++){
            if(maxposition>=nums.size()-1){
                return true;
            }
            else if(nums[i]!=0){
                maxposition = max(nums[i]+i,maxposition);
            }
            else if(nums[i]==0&&maxposition==i){
                return false;
            }
        }
        return true;
    }
};
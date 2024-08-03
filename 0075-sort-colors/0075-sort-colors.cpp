class Solution {
public:
    void sortColors(vector<int>& nums) {
        int ones =0,zeros =0;
        for(int n:nums){
            if(n==0) zeros++;
            else if(n==1) ones++;
        }
    for(int i=0;i<zeros;i++){
        nums[i] = 0;
    }
    for(int i=zeros;i<ones+zeros;i++){
        nums[i] = 1;
    }
    for(int i=ones+zeros;i<nums.size();i++){
        nums[i] =2;
    }

    }
};
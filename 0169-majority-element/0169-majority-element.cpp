class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // int maxcount = 0;
        // int n = 0;
        // for(int i=0;i<nums.size();i++){
        //     // int count =0;
        //     // for(int j=0;j<nums.size();j++){
        //     //     if(nums[i]==nums[j]){
        //     //         count ++;
        //     //     }
        //     // }
        //     int cnt = count(nums.begin(),nums.end(),nums[i]) ;
        //     if(cnt > maxcount && cnt > nums.size()/2){
        //         maxcount = cnt;
        //         n = nums[i];
        //     }
        // }
    
        sort(nums.begin(),nums.end());
        int n = nums.size()/2;
        return nums[n];
    }
};
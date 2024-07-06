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
    int count = 1;
    int maxcount = INT_MIN;
    int n =nums[0];
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){    
            if(nums[i-1]==nums[i]){
                count++;
                if(count > maxcount && count > nums.size()/2 ){
                    maxcount =count ;
                    n =  nums[i-1];
                    count =1;
                }
            }
            else{
                if(count > maxcount && count > nums.size()/2 ){
                    maxcount =count ;
                    n =  nums[i-1];
                    count =1;
                }
                else{
                    count =1;
                }
            }
        }

        return n;
    }
};
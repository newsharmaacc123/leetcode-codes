class Solution {
public:
    set<vector<int>>ans;
    void cal(vector<int>& nums,vector<int> arr,int index){
        if(arr.size()<=nums.size()){
            ans.insert(arr);
        }
        for(int i = index;i<nums.size();i++){
            arr.push_back(nums[i]);
            cal(nums,arr,i+1);
            arr.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> arr;
        sort(nums.begin(),nums.end());
        cal(nums,arr,0);
        vector<vector<int>> ans1(ans.begin(),ans.end());
        return ans1;
    }
};
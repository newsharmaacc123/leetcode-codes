class Solution {
public:
    vector<vector<int>> ans;
    void cal(vector<int>& candidates,vector<int>nums, int target,int index){
        if(target==0){
            ans.push_back(nums);
            return;
        }
        for(int i=index;i<candidates.size();i++){
            if(i>index && candidates[i]==candidates[i-1]) continue;
            if(target-candidates[i]>=0){
                nums.push_back(candidates[i]);
                cal(candidates,nums,target-candidates[i],i+1);
                nums.pop_back();
            }
            else{
                break;
            }
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> nums;
        sort(candidates.begin(),candidates.end());
        cal(candidates,nums,target,0);
        return ans;
    }
};
class Solution {
public:
    vector<vector<int>> ans;
    void cal(vector<int>& candidates, int target,int size,vector<int>&num){
        if(size<0){
            if(target ==0){
                    ans.push_back(num);
            }
            return;
        }
        if(target - candidates[size]>=0){
            num.push_back(candidates[size]);
            cal(candidates,target-candidates[size],size,num);
            num.pop_back();
        } 
        cal(candidates,target,size-1,num);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> num ;
        cal(candidates,target,candidates.size()-1,num);
        return ans;
        }
};
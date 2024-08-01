class Solution {
public:
vector<vector<int>> ans;
unordered_set<int> s;
void cal(vector<int>& nums,vector<int>& value){
        if(value.size()==nums.size()){
            ans.push_back(value);
        }
        for(int i=0;i<nums.size();i++){
            if(s.find(nums[i])==s.end()){
                s.insert(nums[i]);
                value.push_back(nums[i]);
                cal(nums,value);
                value.pop_back();
                s.erase(nums[i]);
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> value;
        cal(nums,value);
        return ans;
    }
};
class Solution {
public:
    void cal(vector<int>& nums,vector<vector<int>>&ans,vector<int> value,unordered_map<int,int> map){
        if(nums.size()==value.size()){
           ans.push_back(value) ;
            return;
        }
        for(auto &[num,count]:map){
            if(count!=0){
                value.push_back(num);
                count--;
                cal(nums,ans,value,map);
                count++;
                value.pop_back();
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> value;
        unordered_map<int,int> map;
        for(int &i:nums){
            map[i]++;
        }
        cal(nums,ans,value,map);
        return ans;
    }
};
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> output;
        for(int i =0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    output.insert(nums1[i]);
                    break;
                }
            }
        }
        vector<int> output1(output.begin(),output.end());
        
        return output1 ;

    }
};
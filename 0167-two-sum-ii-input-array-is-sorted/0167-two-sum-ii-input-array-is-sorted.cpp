class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> result;
        int left =0,right = numbers.size()-1;
        while(left<right){
            if(target > numbers[left]+numbers[right]){
                left++;
            }
            else if(target<numbers[left]+numbers[right]){
                right--;
            }
            else{
                left++;
                right++;
                result.push_back(left);
                result.push_back(right);
                break;
            }
        }
        return result;
        
    }
};
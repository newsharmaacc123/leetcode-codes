class Solution {
public:
    bool isPalindrome(int x) {
        string str = to_string(x);
        int left = 0,right = str.size()-1;
        while(left<=right){
            if(str[left]!=str[right]){
                return false;
            }
            else{
                left++,right--;
            }
        }
        return true;
    }
};
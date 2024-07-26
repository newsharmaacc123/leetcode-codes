class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=1;
        for(int i=digits.size()-1;i>=0;i--){
            if(digits[i]!=9){
                digits[i] = digits[i]+carry;
                carry = 0;
                break;
            }
            else{
                if(carry==1){
                    digits[i] = 0;
                    carry =1;
                }
            }
        }
        if(carry ==1){
            digits[0]++;
            digits.push_back(0);
            return digits;
        }
        else{
            return digits;
        }
    }
};
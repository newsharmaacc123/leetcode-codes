class Solution {
public:
    bool isValid(string s) {
        stack<char> valid;
        for(int i=0;i<s.size();i++){
            if(!valid.empty()){
                char ch= valid.top(),c = s[i];
                if(c=='('||c=='{'||c=='['){
                    valid.push(c);
                }
                else if((c==')'&&ch=='(')||(c=='}'&&ch=='{')||(c==']'&&ch=='[')){
                    valid.pop();
                }
                else{
                    return false;
                }
            }
            else{
                valid.push(s[i]);
            }

        }
        return !valid.empty()?0:1;
    }
};
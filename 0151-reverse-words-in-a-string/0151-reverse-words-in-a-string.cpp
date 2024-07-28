class Solution {
public:
    string reverseWords(string s) {
        vector<string> hello;
        // bool counting  = false;
        string str = "";
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]!=' '){
                str+=s[i];
            }
            else {
                if(!str.empty()){
                    reverse(str.begin(),str.end());
                    hello.push_back(str);
                    str = "";

                }
            }
        }
        if(!str.empty()){
            reverse(str.begin(),str.end());
            hello.push_back(str);
        }
        string new1 = "";
        for(int i=0;i<hello.size();i++){
            if(i==hello.size()-1){
                new1+=hello[i];

            }
            else  new1+=hello[i]+" ";
        }
        return new1;
    }
};
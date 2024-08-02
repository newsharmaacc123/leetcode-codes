class Solution {
public:
    void cal(unordered_map<char,string> mp,int index ,string digits,string st,vector<string>&hello){
        if(st.size()==digits.size()){
            hello.push_back(st);
            return ;
        }
        char c= digits[index];
        string val = mp[c];
        for(int i=0;i<val.size();i++){
            st.push_back(val[i]);
            cal(mp,index+1,digits,st,hello);
            st.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> hello ;
        if(digits.empty()){
            return hello;
        }
        unordered_map<char,string> m = {{'1',""},{'2',"abc"},{'3',"def"},{'4',"ghi"},{'5',"jkl"},{'6',"mno"},{'7',"pqrs"},{'8',"tuv"},{'9',"wxyz"}};
        string st = "";
         cal(m,0,digits,st ,hello);
        return hello;
    }
};
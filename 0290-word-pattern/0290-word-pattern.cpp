class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<string,char> pt;
        unordered_map<char,string> st;
        vector<string> value;
        string ss = "";
        for(int i=0;i<s.size();i++){
            if(s[i]!=' '){
                ss+=s[i];
            }
            else{
                value.push_back(ss);
                ss = "";
            }
        }
        value.push_back(ss);
        if(value.size()!=pattern.size()) return false;
        for(int i=0;i<value.size();i++){
            if(pt.find(value[i])!=pt.end()&&pt[value[i]]!=pattern[i]){
                return false;
            }
            if(st.find(pattern[i])!=st.end()&&st[pattern[i]]!=value[i]){
                return false;
            }
            pt[value[i]] = pattern[i];
            st[pattern[i]] = value[i];
        }
        return true;
    }
};
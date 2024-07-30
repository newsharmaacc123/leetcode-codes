class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>sT;
        unordered_map<char,char>tT;
        for(int i=0;i<s.size();i++){
            if(tT.find(t[i])!=tT.end()&&tT[t[i]]!=s[i]){
                return false;
            }   
            if(sT.find(s[i])!=sT.end()&&sT[s[i]]!=t[i]){
                return false;
            }
                sT[s[i]] = t[i];
                tT[t[i]] = s[i];
            
        }
        return true;
    }
};
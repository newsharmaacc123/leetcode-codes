class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int sT[256] = {0},tT[256]={0};
        for(int i=0;i<s.size();i++){
            if(sT[s[i]] !=tT[t[i]] ) return false;
            else{
                sT[s[i]]=i+1;
                tT[t[i]]=i+1;
            }
        }
        return true;
    }
};
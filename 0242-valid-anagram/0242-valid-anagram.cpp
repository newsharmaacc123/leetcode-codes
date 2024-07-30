class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> ana;
        if(s.size()!=t.size()) return false;
        for(char c: s){
            if(ana.find(c)!=ana.end()){
                ana[c]++;
            }
            else{
                ana[c] = 1;
            }
        }
        for(int i=0;i<t.size();i++){
            if(ana.find(t[i])==ana.end()){
                return false;
            }
            else if(ana.find(t[i])!=ana.end()&&ana[t[i]]==0){
                return false;
            }
            else{
                ana[t[i]] --;
            }
        }
        return true;
    }
};
class Solution {
public:
    bool isIsomorphic(string s, string t) {
         unordered_map<char, char> sT;
        unordered_map<char, char> tS;

        for (int i = 0; i < s.size(); i++) {
            char cs = s[i];
            char ct = t[i];

            if (sT.find(cs) != sT.end() && sT[cs] != ct) {
                return false;
            }
            if (tS.find(ct) != tS.end() && tS[ct] != cs) {
                return false;
            }

            sT[cs] = ct;
            tS[ct] = cs;
        }

        return true;
    }
};
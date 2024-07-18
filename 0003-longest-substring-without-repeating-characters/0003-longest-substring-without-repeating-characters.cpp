class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==1){
            return 1;
        }
        int start =0, last =0;
        int max_num = 0;
        set<int> result;
        while(last<s.size()){
            auto it = result.find(s[last]);
            if(it==result.end()){
                if(last-start+1>max_num){
                    max_num = max(last-start+1,max_num);
                }
                result.insert(s[last]);
                last++;
            }
            else{
                result.erase(s[start]);
                start ++;
            }
        }
        return max_num;
    }
};
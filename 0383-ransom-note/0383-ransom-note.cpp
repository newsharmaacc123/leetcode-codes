class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> magzine_map;
        for(char c:magazine){
            if(magzine_map.find(c)==magzine_map.end()){
                magzine_map[c] =1;
            }
            else{
                magzine_map[c]++;
            }
        }
        for(char c:ransomNote){
            if(magzine_map.find(c)!=magzine_map.end()&&magzine_map[c]>0){
                magzine_map[c]--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};
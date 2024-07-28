class Solution {
public:
    int romanToInt(string s) {
        int count =0,i=0;
        map<char,int>h =  {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',    1000}};
        for(int i=0;i<s.size();i++){
            if(h[s[i]]<h[s[i+1]]){
                count  += h[s[i+1]]-h[s[i]];
                i = i+1;
            }
            else{
                count += h[s[i]];
            }
        }
        return count ;
    }
};
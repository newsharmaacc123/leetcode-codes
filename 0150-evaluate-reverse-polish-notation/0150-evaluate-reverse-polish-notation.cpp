class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        if(tokens.size()==1){
            return stoi(tokens[0]);
        }
        stack<int> hello;
        int res =0;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="+"||tokens[i]=="-"||tokens[i]=="*"||tokens[i]=="/"){
                vector<int> num(2);
                for(int i=0;i<2;i++){
                    num[i] = hello.top();
                    hello.pop();
                }
                if(tokens[i]=="+"){
                    res = num[0]+num[1];
                    hello.push(res);
                }
                else if(tokens[i]=="-"){
                    res = num[1]-num[0];
                    hello.push(res);
                }
                else if(tokens[i]=="*"){
                    res = num[1]*num[0];
                    hello.push(res);
                }
                else if(tokens[i]=="/"){
                    res = num[1]/num[0];
                    hello.push(res);
                }
                
            }
            else{
                hello.push(stoi(tokens[i]));
            }   
        }
        return res;
    }
};
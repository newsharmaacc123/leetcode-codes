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
                int num0=0,num1=0;
                num0 = hello.top();
                hello.pop();
                num1 = hello.top();
                hello.pop();
                if(tokens[i]=="+"){
                    res = num0+num1;
                    hello.push(res);
                }
                else if(tokens[i]=="-"){
                    res = num1-num0;
                    hello.push(res);
                }
                else if(tokens[i]=="*"){
                    res = num1*num0;
                    hello.push(res);
                }
                else if(tokens[i]=="/"){
                    res = num1/num0;
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
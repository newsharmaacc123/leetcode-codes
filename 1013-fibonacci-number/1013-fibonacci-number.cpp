class Solution {
public:
    int cal(int n){
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
        // if(dp[n]!=-1){
        //     return dp[n];
        // }
        return  cal(n-1)+cal(n-2);
        // return dp[n];
    }
    int fib(int n) {
        if(n==0){
            return 0;
        }
        else if(n==1){
            return 1;
        }
        else{
            // vector<int> dp(n+1,-1);
            // dp[0]=0;
            // dp[1]=1;
            int calculate = cal(n);
            return calculate;   
        }
    }
};
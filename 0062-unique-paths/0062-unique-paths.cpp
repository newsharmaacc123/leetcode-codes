#define num 2000000000;
class Solution {
public:
    int cal(int m,int n,vector<vector<int>>dp){
        if(m==0&&n==0){
            return 1;
        }
        if(m<0||n<0){
            return 0;
        }
        if(dp[m][n]!=-1){
            return dp[m][n];
        }
        int left = cal(m-1,n,dp);
        int right = cal(m,n-1,dp);
        dp[m][n]=left+right;
        return dp[m][n];
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int>(n,-1));

        vector<int> prev(n,0);

        for(int i =0;i<m;i++){
            vector<int> temp(n,0);
            for(int j=0;j<n;j++){
                int left = 0,up = 0;
                if(i==0&&j==0) temp[j] =1;
                else{
                    if(i>0) up = prev[j];
                    if(j>0) left = temp[j-1];
                    temp[j] = left+up;
                }
            }
            prev = temp;
        }
        return prev[n-1];
    }
};
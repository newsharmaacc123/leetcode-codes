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

        dp[0][0] = 1;

        for(int i =0;i<m;i++){
            for(int j=0;j<n;j++){
                int left = 0,up = 0;
                if(i==0&&j==0) dp[i][j] =1;
                else{
                    if(i>0) up = dp[i-1][j];
                    if(j>0) left = dp[i][j-1];
                    dp[i][j] = left+up;
                }

            }
        }
        return dp[m-1][n-1];
    }
};
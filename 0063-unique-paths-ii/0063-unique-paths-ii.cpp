class Solution {
public:
    int cal(int n,int m,vector<vector<int>>& obstacleGrid,vector<vector<int>> &dp){
        if((m>=0&&n>=0) &&(obstacleGrid[n][m]==1)){
            return 0;
        }
        if(m==0&&n==0){
           return obstacleGrid[n][m] == 1 ? 0 : 1;

        }
        if(m<0||n<0){
            return 0;
        }
        if(dp[n][m]!=-1) return dp[n][m];
       
        int left = cal(n,m-1,obstacleGrid,dp);
        int up = cal(n-1,m,obstacleGrid,dp);
        dp[n][m] = left+up;
        return dp[n][m];
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n=obstacleGrid.size(),m = obstacleGrid[0].size() ;
        vector<vector<int>> dp(n,vector<int>(m,-1));
        return cal(n-1,m-1,obstacleGrid,dp);
    }
};
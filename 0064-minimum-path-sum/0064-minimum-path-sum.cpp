class Solution {
public:
    int cal(int row,int col,vector<vector<int>>& grid,vector<vector<int>> &dp){
        if(row==0&&col==0) return grid[0][0];
        if(row<0||col<0) return INT_MAX;
        if(dp[row][col]!=-1) return dp[row][col];
        int left = cal(row,col-1,grid,dp);
        int up = cal(row-1,col,grid,dp);
        dp[row][col] = grid[row][col]+min(left,up);
        return dp[row][col];
    }
    int minPathSum(vector<vector<int>>& grid) {
        int row = grid.size(),col = grid[0].size();
        vector<vector<int>> dp(row,vector<int>(col,INT_MAX));
        // return cal(row-1,col-1,grid,dp);
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(i==0&&j==0) dp[i][j] = grid[0][0];
                if(i>0) dp[i][j] = min(dp[i][j],dp[i-1][j]+grid[i][j]);
                if(j>0) dp[i][j] = min(dp[i][j],dp[i][j-1]+grid[i][j]);
            }
        }
        return dp[row-1][col-1];
    }
};
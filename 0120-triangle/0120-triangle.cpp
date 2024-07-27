class Solution {
public:
    int  sum=0;
    int cal(int row,int col,vector<vector<int>>& triangle,vector<vector<int>>&dp){
        if(row==triangle.size()-1) return triangle[row][col];
        if(col==triangle[row].size()) return INT_MAX;
        if(dp[row][col]!=-1) return dp[row][col];
        int down = cal(row+1,col,triangle,dp);
        int diagonal = cal(row+1,col+1,triangle,dp);
        dp[row][col] =  triangle[row][col]+min(down,diagonal);
        return dp[row][col];

    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int row = triangle.size();
        int col = triangle[row-1].size();
        vector<vector<int>> dp(row,vector<int>(col,INT_MAX));
        // return cal(0,0,triangle,dp);
        for(int i=0;i<col;i++){
            dp[row-1][i] = triangle[row-1][i];
        }
        for(int i=row-2;i>=0;i--){
            for(int j=i;j>=0;j--){
                dp[i][j] = triangle[i][j]+min(dp[i+1][j+1],dp[i+1][j]);
            }
        }
        return dp[0][0];
    }
};
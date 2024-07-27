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
        vector<vector<int>> dp(row,vector<int>(col,-1));
        return cal(0,0,triangle,dp);
    }
};
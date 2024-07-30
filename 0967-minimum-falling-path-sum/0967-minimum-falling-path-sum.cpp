class Solution {
public:
    // int recur(int row,int col, vector<vector<int>>& matrix,vector<vector<int>>& dp){
    //     if(col>=matrix.size()||col<0) return INT_MAX;
    //     if(row==0) return matrix[0][col];
    //     if(dp[row][col]!=-1) return dp[row][col];
    //     dp[row][col] =  matrix[row][col]+min(recur(row-1,col,matrix,dp),min(recur(row-1,col-1,matrix,dp),recur(row-1,col+1,matrix,dp)));
    //     return dp[row][col];
    // }

    int tabulation(int row,int col, vector<vector<int>>& matrix,vector<vector<int>>& dp){
        for(int i=1;i<row;i++){
            for(int j=0;j<col;j++){
                int ld=0,rd =0,d=0;
                if(j-1>=0) ld = matrix[i][j]+dp[i-1][j-1];
                else ld = +1e8;
                if(j+1<col) rd = matrix[i][j]+dp[i-1][j+1];
                else rd = +1e8;
                d = matrix[i][j]+dp[i-1][j];
                dp[i][j] = min(ld,min(rd,d));
            }
        }
        int count = INT_MAX;
        for(int i=0;i<col;i++){
            count = min(count,dp[row-1][i]);
        }
        return count;
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix.size();
        vector<vector<int>> dp(row,vector<int>(col,INT_MAX));
        // int num = INT_MAX;
        for(int i=0;i<col;i++){
            dp[0][i] = matrix[0][i];
        }
        return tabulation(row,col,matrix,dp) ;
    }
};
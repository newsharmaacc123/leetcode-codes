class Solution {
public:
    int cal(int row,int j1,int j2, vector<vector<int>>& grid, vector<vector<vector<int>>> &dp){
        if(j1<0||j1>=grid[0].size()||j2<0||j2>=grid[0].size()) return -1e8;
        if(row==grid.size()-1){
            if(j1==j2) return grid[row][j1];
            else return grid[row][j1]+grid[row][j2];
        }
        if(dp[row][j1][j2]!=-1) return dp[row][j1][j2];
        int maxi = -1e8;
        for(int i=-1;i<=1;i++){
            for(int j=-1;j<=1;j++){
                int value = 0;
                if(j1==j2) value = grid[row][j1];
                else {
                    value =  grid[row][j1]+grid[row][j2];
                }
                value += cal(row+1,j1+i,j2+j,grid,dp);
                maxi = max(maxi,value);
            }
        }
        return dp[row][j1][j2] = maxi;
    }
    int cherryPickup(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        vector<vector<vector<int>>> dp(row,vector<vector<int>>(col,vector<int>(col,-1)));
        return cal(0,0,col-1,grid,dp);

    }
};
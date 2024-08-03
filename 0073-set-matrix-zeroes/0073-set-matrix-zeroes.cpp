class Solution {
public:

    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<int> row1(row,-1);
        vector<int> col1(col,-1);
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]==0){
                    row1[i]=0;
                    col1[j]=0;
                }
            }
        }
        for(int i=0;i<row;i++){
            if(row1[i]==0){
                int j=0;
                while(j<col){
                    matrix[i][j]=0;
                    j++;
                }
            }
        }
        for(int i=0;i<col;i++){
            if(col1[i]==0){
                int j=0;
                while(j<row){
                    matrix[j][i]=0;
                    j++;
                }
            }
        }
    }
};
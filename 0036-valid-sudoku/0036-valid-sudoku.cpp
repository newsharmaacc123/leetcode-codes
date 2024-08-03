class Solution {
public:
    bool valid(vector<vector<char>>& board, int sr, int sc) {
        unordered_set<char> get;
        for (int i = sr; i < sr + 3; ++i) {
            for (int j = sc; j < sc + 3; ++j) {
                if (board[i][j] == '.') continue;
                if (get.find(board[i][j]) != get.end()) {
                    return false;
                }
                get.insert(board[i][j]);
            }
        }
        return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        int row = 9;
        int col = 9;
        
        // Check rows
        for (int i = 0; i < row; ++i) {
            unordered_set<char> st;
            for (int j = 0; j < col; ++j) {
                if (board[i][j] == '.') continue;
                if (st.find(board[i][j]) != st.end()) {
                    return false;
                }
                st.insert(board[i][j]);
            }
        }
        
        // Check columns
        for (int i = 0; i < col; ++i) {
            unordered_set<char> ts;
            for (int j = 0; j < row; ++j) {
                if (board[j][i] == '.') continue;
                if (ts.find(board[j][i]) != ts.end()) {
                    return false;
                }
                ts.insert(board[j][i]);
            }
        }

        // Check 3x3 subgrids
        for (int sr = 0; sr < row; sr += 3) {
            for (int sc = 0; sc < col; sc += 3) {
                if (!valid(board, sr, sc)) {
                    return false;
                }
            }
        }
        
        return true;
    }
};
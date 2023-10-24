class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int row[9][9] = {}, col[9][9] = {}, sud[9][9] = {};
        for(int i=0; i<9; i++) {
            for(int j=0; j<9; j++) {
                if(board[i][j] != '.') {
                    int num = board[i][j] - '0' - 1, k = i / 3 * 3 + j / 3;
                    if(row[i][num] or col[j][num] or sud[k][num]) return false;
                    row[i][num] = col[j][num] = sud[k][num] = 1;
                }
            }
        }
        return true;
    }
};

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int startRow = 0, startCol = 0, endRow = matrix.size() - 1, endCol = matrix[0].size() - 1, i;
        vector<int> result;
        while (startRow <= endRow && startCol <= endCol) {
            for (i = startCol; i <= endCol && startRow <= endRow; i++) {
                result.push_back(matrix[startRow][i]);
            }
            startRow++;
            for (i = startRow; i <= endRow && startCol <= endCol; i++) {
                result.push_back(matrix[i][endCol]);
            }
            endCol--;
            for (i = endCol; i >= startCol && startRow <= endRow; i--) {
                result.push_back(matrix[endRow][i]);
            }
            endRow--;
            for (i = endRow; i >= startRow && startCol <= endCol; i--) {
                result.push_back(matrix[i][startCol]);
            }
            startCol++;
        }
        return result;
    }
};

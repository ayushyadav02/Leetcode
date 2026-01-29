class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();        // number of rows
        int m = matrix[0].size();     // number of columns

        int row = 0;
        int col = m - 1;              

        while (row < n && col >= 0) {
            if (matrix[row][col] == target)
                return true;
            else if (matrix[row][col] > target)
                col--;               
            else
                row++;               
        }
        return false;
    }
};



// time complexity is o(n+m)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Binary search on a virtual 1D array mapped to 2D matrix
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty()) return false;

        int m = matrix.size();
        int n = matrix[0].size();

        int low = 0;
        int high = m * n - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            // Convert 1D index to 2D coordinates
            int row = mid / n;
            int col = mid % n;

            if (matrix[row][col] == target)
                return true;
            else if (matrix[row][col] > target)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return false;
    }
};


// Optional: Local testing
int main() {
    Solution sol;

    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };

    int target = 3;

    if (sol.searchMatrix(matrix, target))
        cout << "Found\n";
    else
        cout << "Not Found\n";

    return 0;
}
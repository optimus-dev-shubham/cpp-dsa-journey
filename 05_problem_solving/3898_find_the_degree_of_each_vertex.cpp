#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<int> res;

        for (int i = 0; i < n; i++) {
            int degree = 0;
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == 1)
                    degree++;
            }
            res.push_back(degree);
        }

        return res;
    }
};

int main() {
    Solution sol;

    int n;
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> matrix[i][j];

    vector<int> result = sol.findDegrees(matrix);

    for (int x : result)
        cout << x << " ";
    cout << endl;

    return 0;
}
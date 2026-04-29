#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || s.size() <= numRows) return s;

        int n = s.size();
        string res;

        int cycle = 2 * numRows - 2;

        for (int i = 0; i < numRows; i++) {
            for (int j = i; j < n; j += cycle) {
                res += s[j];

                int second = j + cycle - 2 * i;
                if (i != 0 && i != numRows - 1 && second < n)
                    res += s[second];
            }
        }
        return res;
    }
};

int main() {
    Solution sol;

    string s;
    int numRows;

    cin >> s >> numRows;
    cout << sol.convert(s, numRows) << endl;

    return 0;
}
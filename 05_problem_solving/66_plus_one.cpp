#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        // traverse from last digit
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            digits[i] = 0; // carry forward
        }

        // all digits were 9
        digits.insert(digits.begin(), 1);
        return digits;
    }
};

int main() {
    Solution obj;

    vector<int> digits1 = {1, 2, 3};
    vector<int> digits2 = {4, 3, 2, 1};
    vector<int> digits3 = {9, 9, 9};

    auto res1 = obj.plusOne(digits1);
    auto res2 = obj.plusOne(digits2);
    auto res3 = obj.plusOne(digits3);

    for (int x : res1) cout << x << " ";
    cout << endl;

    for (int x : res2) cout << x << " ";
    cout << endl;

    for (int x : res3) cout << x << " ";
    cout << endl;

    return 0;
}
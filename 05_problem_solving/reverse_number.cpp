#include <iostream>
#include <climits>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int rev_num = 0;

        while (x != 0) {
            int digit = x % 10;

            // Check for overflow BEFORE multiplying
            if (rev_num > INT_MAX / 10 || rev_num < INT_MIN / 10)
                return 0;

            rev_num = rev_num * 10 + digit;
            x /= 10;
        }

        return rev_num;
    }
};

int main() {
    Solution sol;

    int x;
    cout << "Enter number: ";
    cin >> x;

    int result = sol.reverse(x);

    cout << "Reversed: " << result << endl;

    return 0;
}
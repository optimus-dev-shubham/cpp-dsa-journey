#include <iostream>
using namespace std;

class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num == 1) return true;

        long long low = 1, high = num / 2;

        while (low <= high) {
            long long mid = low + (high - low) / 2;
            long long sq = mid * mid;

            if (sq == num) return true;
            else if (sq > num) high = mid - 1;
            else low = mid + 1;
        }

        return false;
    }
};

int main() {
    Solution s;

    cout << s.isPerfectSquare(16) << endl; // 1
    cout << s.isPerfectSquare(14) << endl; // 0

    return 0;
}
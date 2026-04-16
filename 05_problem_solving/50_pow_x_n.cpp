#include <iostream>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        long long N = n;
        return power(x, N);
    }

private:
    double power(double x, long long n) {
        if (n == 0) return 1;
        if (n < 0) return 1 / power(x, -n);

        double half = power(x, n / 2);

        if (n % 2 == 0) return half * half;
        return half * half * x;
    }
};

int main() {
    Solution s;

    cout << s.myPow(2.0, 10) << endl;
    cout << s.myPow(2.0, -2) << endl;

    return 0;
}
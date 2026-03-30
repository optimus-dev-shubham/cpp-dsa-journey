#include <iostream>
using namespace std;

// find LCM using brute force
int LCM(int a, int b) {
    // start from max of a and b
    int c = (a > b) ? a : b;

    // check multiples until a*b
    for (; c <= a * b; c++) {
        if (c % a == 0 && c % b == 0) {
            return c;
        }
    }

    return a * b;  // fallback (never usually reached)
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << LCM(a, b);

    return 0;
}
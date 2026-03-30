#include <iostream>
using namespace std;

int main() {
    int a, b;

    cin >> a >> b;

    // take minimum of a and b
    int c = (a < b) ? a : b;

    // check from c downwards
    for (int i = c; i > 0; i--) {
        if (a % i == 0 && b % i == 0) {
            cout << i;
            break;
        }
    }

    return 0;
}
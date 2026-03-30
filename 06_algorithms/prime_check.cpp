#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // numbers less than 2 are not prime
    if (n < 2) {
        cout << "False";
        return 0;
    }

    // check till sqrt(n)
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            cout << "False";
            return 0;
        }
    }

    cout << "True";

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int a, b, c, ans;

    // Taking three numbers as input
    cin >> a >> b >> c;

    // Finding the greatest among three numbers using nested if-else
    if (a > b) {
        if (a > c)
            ans = a;
        else
            ans = c;
    } 
    else {
        if (b > c)
            ans = b;
        else
            ans = c;
    }

    // Output the result
    cout << ans;

    return 0;
}
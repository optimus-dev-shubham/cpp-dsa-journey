#include <iostream>
using namespace std;

// Program to check whether a number is positive, negative, or zero
// Time Complexity: O(1)
// Space Complexity: O(1)

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    // Check the nature of the number
    if (n > 0) {
        cout << "The number is positive." << endl;
    } else if (n == 0) {
        cout << "The number is zero." << endl;
    } else {
        cout << "The number is negative." << endl;
    }

    return 0;
}
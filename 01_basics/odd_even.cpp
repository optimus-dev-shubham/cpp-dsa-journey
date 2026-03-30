#include <iostream>
using namespace std;

// Program to check whether a number is even or odd
// Time Complexity: O(1)
// Space Complexity: O(1)

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    // Check if the number is even or odd
    if (n % 2 == 0) {
        cout << "The number is even." << endl;
    } else {
        cout << "The number is odd." << endl;
    }

    return 0;
}
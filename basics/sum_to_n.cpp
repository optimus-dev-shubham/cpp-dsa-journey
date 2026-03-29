#include <iostream>
using namespace std;

// Program to calculate the sum of first n natural numbers
// Time Complexity: O(1)
// Space Complexity: O(1)

int main() {
    int n;
    int sum;

    cout << "Enter a number: ";
    cin >> n;

    // Using formula: n(n+1)/2
    sum = (n * (n + 1)) / 2;

    cout << "Sum of first " << n << " natural numbers is: " << sum << endl;

    return 0;
}
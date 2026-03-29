#include <iostream>
using namespace std;

// Program to swap two numbers using a temporary variable
int main() {
    int a, b, temp;

    cout << "Enter values of a and b: ";
    cin >> a >> b;

    // Swapping logic
    temp = a;
    a = b;
    b = temp;

    cout << "After swapping:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
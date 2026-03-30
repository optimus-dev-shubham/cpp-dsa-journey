#include <iostream>
using namespace std;

// swap two numbers using reference
void swapNumbers(int &a, int &b) {
    int temp = a;  // store a
    a = b;         // assign b to a
    b = temp;      // assign temp to b
}

int main() {
    int x, y;
    cin >> x >> y;

    // call function
    swapNumbers(x, y);

    // print swapped values
    cout << x << " " << y;

    return 0;
}
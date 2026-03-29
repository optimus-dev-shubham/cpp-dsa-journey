#include <iostream>
using namespace std;

// Program to find the last digit of a number
int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    int last_digit = abs(n % 10);

    cout << "Last digit is: " << last_digit << endl;

    return 0;
}
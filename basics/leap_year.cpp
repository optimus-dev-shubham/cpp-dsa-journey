#include <iostream>
using namespace std;

int main() {
    int year;

    // Taking year as input
    cout << "Enter the Year: ";
    cin >> year;

    // Leap Year Logic:
    // - Divisible by 400 → Leap Year
    // - OR divisible by 4 AND not divisible by 100 → Leap Year
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
        cout << "True";
    } 
    else {
        cout << "False";
    }

    return 0;
}
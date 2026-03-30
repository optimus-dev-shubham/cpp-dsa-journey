#include <iostream>
using namespace std;

// Function to perform basic arithmetic operations
// operator_:
// 1 -> Addition
// 2 -> Subtraction
// 3 -> Multiplication
// 4 -> Division
void calculate(int a, int b, int operator_) {

    switch (operator_) {

        case 1:
            // Addition
            cout << "Result: " << (a + b);
            break;

        case 2:
            // Subtraction
            cout << "Result: " << (a - b);
            break;

        case 3:
            // Multiplication
            cout << "Result: " << (a * b);
            break;

        case 4:
            // Division (with zero check)
            if (b != 0)
                cout << "Result: " << (a / b);
            else
                cout << "Error: Division by zero";
            break;

        default:
            cout << "Invalid operator!";
    }
}

int main() {
    int a, b, operator_;

    // Taking input from user
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Choose operation:\n";
    cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
    cin >> operator_;

    // Function call
    calculate(a, b, operator_);

    return 0;
}
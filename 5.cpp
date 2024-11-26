#include <iostream>
using namespace std;

int main() {
    int num1, num2;      // Variables to store the two integers
    char operation;      // Variable to store the arithmetic operator
    double result;       // Variable to store the result (double to handle division)

    // Prompt user for input
    cout << "Enter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;
    cout << "Enter an arithmetic operator (+, -, *, /): ";
    cin >> operation;

    // Perform the operation using a switch statement
    switch (operation) {
        case '+':
            result = num1 + num2;
            cout << "Result: " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "Result: " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "Result: " << result << endl;
            break;
        case '/':
            if (num2 != 0) {  // Check for division by zero
                result = static_cast<double>(num1) / num2;
                cout << "Result: " << result << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Error: Invalid operator entered." << endl;
            break;
    }
}

#include<iostream>
  using namespace std;
  int main() {
    int num1, num2;    // Variables to store the integers
    char op;           // Variable to store the arithmetic operator
    double result;     // Variable to store the result (double to handle division)

    // Prompt user for input
    cout << "Enter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    // Perform the operation using if-else statements
    if (op == '+') {
        result = num1 + num2;
        cout << "Result: " << result << endl;
    } else if (op == '-') {
        result = num1 - num2;
        cout << "Result: " << result << endl;
    } else if (op == '*') {
        result = num1 * num2;
        cout << "Result: " << result << endl;
    } else if (op == '/') {
        if (num2 != 0) {  // Check for division by zero
            result = static_cast<double>(num1) / num2;
            cout << "Result: " << result << endl;
        } else {
            cout << "Error: Division by zero is not allowed." << endl;
        }
    } else {
        cout << "Error: Invalid operator entered." << endl;
    }


}
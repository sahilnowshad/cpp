#include<iostream>
using namespace std;

int sum(int n1, int n2) {
    return n1 + n2;
}

int difference(int n1, int n2) {
    return n1 - n2;
}

int multiplication(int n1, int n2) {
    return n1 * n2;
}

int division(int n1, int n2) {
    if (n2 == 0) {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
    return n1 / n2;
}

int main() {
    int n1, n2, choice;

    cout << "Enter the first number (n1): ";
    cin >> n1;
    cout << "Enter the second number (n2): ";
    cin >> n2;

    cout << "Choose operation:\n";
    cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "The sum is: " << sum(n1, n2) << endl;
            break;
        case 2:
            cout << "The difference is: " << difference(n1, n2) << endl;
            break;
        case 3:
            cout << "The multiplication is: " << multiplication(n1, n2) << endl;
            break;
        case 4:
            cout << "The division is: " << division(n1, n2) << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}

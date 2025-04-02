#include <iostream>
using namespace std;

class Calculator {
private:
    double num1, num2;

public:
    // Function to set values using 'this' pointer
    void setValues(double n1, double n2) {
        this->num1 = n1;
        this->num2 = n2;
    }
    
    // Function to add numbers
    double add() {
        return num1 + num2;
    }
    
    // Function to subtract numbers
    double subtract() {
        return num1 - num2;
    }
    
    // Function to multiply numbers
    double multiply() {
        return num1 * num2;
    }
    
    // Function to divide numbers
    double divide() {
        if (num2 != 0)
            return num1 / num2;
        else {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    }
};

int main() {
    Calculator calc;
    double n1, n2;
    
    // Taking input from the user
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;
    
    // Setting values
    calc.setValues(n1, n2);
    
    // Performing operations
    cout << "Addition: " << calc.add() << endl;
    cout << "Subtraction: " << calc.subtract() << endl;
    cout << "Multiplication: " << calc.multiply() << endl;
    cout << "Division: " << calc.divide() << endl;
    
    return 0;
}

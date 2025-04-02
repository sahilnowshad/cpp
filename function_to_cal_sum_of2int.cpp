#include <iostream>
using namespace std;

// Function to calculate the sum of two integers
int sum(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;
    
    // Taking input from the user
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
    // Calling the sum function and displaying the result
    int result = sum(num1, num2);
    cout << "The sum is: " << result << endl;
    
    return 0;
}

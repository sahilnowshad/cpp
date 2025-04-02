#include <iostream>
using namespace std;

// Function to calculate the sum of two integers
int sum(int a, int b) {
    return a + b;
}

// Function to calculate the area of a circle
double calculateArea(double radius, double pi = 3.14) {
    return pi * radius * radius;
}

// Function to return the square of a number (pass by value)
int squareValue(int num) {
    return num * num;
}

// Function to modify the number to its square (pass by reference)
void squareReference(int &num) {
    num = num * num;
}

int main() {
    int num1, num2;
    
    // Taking input from the user
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
    // Calling the sum function and displaying the result
    int result = sum(num1, num2);
    cout << "The sum is: " << result << endl;
    
    // Calculating and displaying the area of a circle
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    
    // Calling calculateArea with default pi
    double area1 = calculateArea(radius);
    cout << "The area of the circle with default pi is: " << area1 << endl;
    
    // Calling calculateArea with specified pi
    double area2 = calculateArea(radius, 3.14159);
    cout << "The area of the circle with specified pi is: " << area2 << endl;
    
    // Demonstrating pass by value and pass by reference
    int number;
    cout << "Enter a number to square: ";
    cin >> number;
    
    // Using pass by value
    int squaredValue = squareValue(number);
    cout << "Square (pass by value): " << squaredValue << endl;
    cout << "Original number after pass by value: " << number << endl;
    
    // Using pass by reference
    squareReference(number);
    cout << "Square (pass by reference): " << number << endl;
    
    return 0;
}

#include<iostream>
using namespace std;
// Function to calculate the sum of two integers
int sum(int a, int b) {
    return a + b;
}

// Function to calculate the area of a circle
double calculateArea(double radius, double pi = 3.14) {
    return pi * radius * radius;
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
    
    return 0;
}
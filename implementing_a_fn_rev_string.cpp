#include <iostream>
#include <algorithm>
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

// Recursive function to calculate factorial
int factorial(int n) {
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

// Function to generate an array of first n even numbers using dynamic memory allocation
int* generateEvenNumbers(int n) {
    int* evenNumbers = new int[n];
    for (int i = 0; i < n; i++) {
        evenNumbers[i] = 2 * (i + 1);
    }
    return evenNumbers;
}

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to reverse a string in-place using pass by reference
void reverseString(string &str) {
    reverse(str.begin(), str.end());
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
    
    // Testing factorial function
    int factNum;
    cout << "Enter a number to compute its factorial: ";
    cin >> factNum;
    cout << "Factorial of " << factNum << " is: " << factorial(factNum) << endl;
    
    // Testing generateEvenNumbers function
    int n;
    cout << "Enter the number of even numbers to generate: ";
    cin >> n;
    int* evenNumbers = generateEvenNumbers(n);
    cout << "First " << n << " even numbers: ";
    for (int i = 0; i < n; i++) {
        cout << evenNumbers[i] << " ";
    }
    cout << endl;
    
    // Freeing dynamically allocated memory
    delete[] evenNumbers;
    
    // Function pointer demonstration
    int (*funcPtr)(int, int) = add;
    cout << "Using function pointer, sum of 5 and 10: " << funcPtr(5, 10) << endl;
    
    // Testing reverseString function
    string inputStr;
    cout << "Enter a string to reverse: ";
    cin >> inputStr;
    reverseString(inputStr);
    cout << "Reversed string: " << inputStr << endl;
    
    return 0;
}

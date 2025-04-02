#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imaginary;

public:
    // Constructor to initialize complex number
    Complex(double r = 0, double i = 0) {
        real = r;
        imaginary = i;
    }
    
    // Function to add two complex numbers
    Complex addComplex(const Complex& other) {
        return Complex(real + other.real, imaginary + other.imaginary);
    }
    
    // Function to display the complex number
    void display() {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

int main() {
    double r1, i1, r2, i2;
    
    // Taking input for first complex number
    cout << "Enter real and imaginary parts of first complex number: ";
    cin >> r1 >> i1;
    Complex num1(r1, i1);
    
    // Taking input for second complex number
    cout << "Enter real and imaginary parts of second complex number: ";
    cin >> r2 >> i2;
    Complex num2(r2, i2);
    
    // Adding the complex numbers
    Complex sum = num1.addComplex(num2);
    
    // Displaying the result
    cout << "The sum of the two complex numbers is: ";
    sum.display();
    
    return 0;
}

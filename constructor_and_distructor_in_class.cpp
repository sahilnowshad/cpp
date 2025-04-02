#include <iostream>
using namespace std;

class Triangle {
private:
    double base;
    double height;

public:
    // Constructor to initialize base and height
    Triangle(double b, double h) {
        base = b;
        height = h;
    }
    
    // Function to calculate area of the triangle
    double calculateArea() {
        return 0.5 * base * height;
    }
    
    // Destructor
    ~Triangle() {
        cout << "Triangle object is being destroyed." << endl;
    }
};

int main() {
    double b, h;
    
    // Taking input from the user
    cout << "Enter the base of the triangle: ";
    cin >> b;
    cout << "Enter the height of the triangle: ";
    cin >> h;
    
    // Creating a Triangle object
    Triangle myTriangle(b, h);
    
    // Displaying the area
    cout << "The area of the triangle is: " << myTriangle.calculateArea() << endl;
    
    return 0;
}

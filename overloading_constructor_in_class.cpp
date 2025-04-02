#include <iostream>
using namespace std;

class Shape {
private:
    double radius;
    double length;
    double breadth;
    bool isCircle;

public:
    // Default constructor
    Shape() {
        radius = 0;
        length = 0;
        breadth = 0;
        isCircle = false;
    }
    
    // Overloaded constructor for circle
    Shape(double r) {
        radius = r;
        isCircle = true;
    }
    
    // Overloaded constructor for rectangle
    Shape(double l, double b) {
        length = l;
        breadth = b;
        isCircle = false;
    }
    
    // Function to calculate area
    double calculateArea() {
        if (isCircle)
            return 3.14159 * radius * radius;
        else
            return length * breadth;
    }
};

int main() {
    double r, l, b;
    
    // Taking input for circle
    cout << "Enter the radius of the circle: ";
    cin >> r;
    Shape circle(r);
    cout << "The area of the circle is: " << circle.calculateArea() << endl;
    
    // Taking input for rectangle
    cout << "Enter the length of the rectangle: ";
    cin >> l;
    cout << "Enter the breadth of the rectangle: ";
    cin >> b;
    Shape rectangle(l, b);
    cout << "The area of the rectangle is: " << rectangle.calculateArea() << endl;
    
    return 0;
}

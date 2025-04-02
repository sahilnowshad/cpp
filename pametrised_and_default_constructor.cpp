#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    // Default constructor initializing values to zero
    Rectangle() {
        length = 0;
        width = 0;
    }
    
    // Parameterized constructor
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }
    
    // Function to calculate perimeter of the rectangle
    double calculatePerimeter() {
        return 2 * (length + width);
    }
};

int main() {
    double l, w;
    
    // Taking input from the user
    cout << "Enter the length of the rectangle: ";
    cin >> l;
    cout << "Enter the width of the rectangle: ";
    cin >> w;
    
    // Creating a Rectangle object using parameterized constructor
    Rectangle myRectangle(l, w);
    
    // Displaying the perimeter
    cout << "The perimeter of the rectangle is: " << myRectangle.calculatePerimeter() << endl;
    
    return 0;
}

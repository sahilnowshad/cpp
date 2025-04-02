#include <iostream>
using namespace std;

class Circle {
private:
    double radius;

public:
    // Constructor to initialize radius
    Circle(double r) {
        radius = r;
    }
    
    // Function to calculate area of the circle
    double calculateArea() {
        return 3.14159 * radius * radius;
    }
};

int main() {
    double r;
    
    // Taking input from the user
    cout << "Enter the radius of the circle: ";
    cin >> r;
    
    // Creating a Circle object
    Circle myCircle(r);
    
    // Displaying the area
    cout << "The area of the circle is: " << myCircle.calculateArea() << endl;
    
    return 0;
}

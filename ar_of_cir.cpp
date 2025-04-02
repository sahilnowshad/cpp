#include <iostream>
#define PI 3.14159

class Circle {
private:
    double radius;

public:
    // Constructor
    Circle() {
        radius = 0.0;
    }

    // Function to set radius
    void setRadius(double r) {
        radius = r;
    }

    // Function to calculate area
    double calculateArea() {
        return PI * radius * radius;
    }

    // Function to display the area
    void displayArea() {
        std::cout << "Radius: " << radius << "\n";
        std::cout << "Area: " << calculateArea() << "\n";
    }
};

int main() {
    Circle c;
    double r;
    std::cout << "Enter radius of the circle: ";
    std::cin >> r;

    c.setRadius(r); // Setting radius
    c.displayArea(); // Displaying area

    return 0;
}
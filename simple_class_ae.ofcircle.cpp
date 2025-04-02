#include <iostream>
using namespace std;
#define PI 3.14159

class Circle {
private:
    double radius;

public:
    // Constructor to initialize radius
    Circle(double r) {
        radius = r;
    }

    // Function to calculate area
    double getArea() {
        return PI * radius * radius;
    }

    // Function to display the radius and area
    void display() {
        cout << "Radius: " << radius <<endl;
        cout << "Area: " << getArea() <<endl;
    }
};

int main() {
    double r;
    cout << "Enter radius of the circle: ";
    cin >> r;

    Circle c(r); // Creating an object of Circle
    c.display();

    return 0;
}


#include <iostream>
using namespace std;

class Triangle {
private:
    double base, height;

public:
    // Constructor to initialize base and height
    Triangle(double b, double h) {
        base = b;
        height = h;
        cout << "Triangle object created." << endl;
    }

    // Function to calculate area
    double calculateArea() {
        return 0.5 * base * height;
    }

    // Destructor
    ~Triangle() {
        cout << "Triangle object destroyed." << endl;
    }
};

int main() {
    double base, height;
    cout << "Enter base and height of the triangle: ";
    cin >> base >> height;

    // Creating an object of Triangle
    Triangle t(base, height);
    cout << "Area of the triangle: " << t.calculateArea() << endl;

    return 0;
}

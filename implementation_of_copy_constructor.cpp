#include <iostream>
#include <cmath>
using namespace std;

class Point {
private:
    double x, y;

public:
    // Constructor to initialize point
    Point(double xCoord = 0, double yCoord = 0) {
        x = xCoord;
        y = yCoord;
    }
    
    // Copy constructor
    Point(const Point& p) {
        x = p.x;
        y = p.y;
    }
    
    // Function to calculate distance between two points
    double calculateDistance(const Point& p2) {
        return sqrt(pow(p2.x - x, 2) + pow(p2.y - y, 2));
    }
};

int main() {
    double x1, y1, x2, y2;
    
    // Taking input for first point
    cout << "Enter x and y coordinates of first point: ";
    cin >> x1 >> y1;
    Point p1(x1, y1);
    
    // Taking input for second point
    cout << "Enter x and y coordinates of second point: ";
    cin >> x2 >> y2;
    Point p2(x2, y2);
    
    // Calculating and displaying distance
    cout << "The distance between the two points is: " << p1.calculateDistance(p2) << endl;
    
    return 0;
}

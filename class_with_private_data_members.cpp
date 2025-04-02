#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    // Setter functions
    void setLength(double l) {
        if (l > 0) length = l;
        else cout << "Length must be positive!" << endl;
    }
    
    void setWidth(double w) {
        if (w > 0) width = w;
        else cout << "Width must be positive!" << endl;
    }
    
    // Getter functions
    double getLength() {
        return length;
    }
    
    double getWidth() {
        return width;
    }
    
    // Function to calculate area of the rectangle
    double calculateArea() {
        return length * width;
    }
};

int main() {
    Rectangle myRectangle;
    double l, w;
    
    // Taking input from the user
    cout << "Enter the length of the rectangle: ";
    cin >> l;
    cout << "Enter the width of the rectangle: ";
    cin >> w;
    
    // Setting length and width
    myRectangle.setLength(l);
    myRectangle.setWidth(w);
    
    // Displaying the area
    cout << "The area of the rectangle is: " << myRectangle.calculateArea() << endl;
    
    return 0;
}

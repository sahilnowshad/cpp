#include <iostream>

class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor to initialize length and width
    Rectangle() {
        length = 0.0;
        width = 0.0;
    }

    // Setter functions
    void setLength(double l) {
        length = l;
    }

    void setWidth(double w) {
        width = w;
    }

    // Getter functions
    double getLength() {
        return length;
    }

    double getWidth() {
        return width;
    }

    // Function to calculate area
    double calculateArea() {
        return length * width;
    }

    // Function to display the area
    void displayArea() {
        std::cout << "Length: " << length << "\n";
        std::cout << "Width: " << width << "\n";
        std::cout << "Area: " << calculateArea() << "\n";
    }
};

int main() {
    double l, w;
    std::cout << "Enter length of the rectangle: ";
    std::cin >> l;
    std::cout << "Enter width of the rectangle: ";
    std::cin >> w;

    Rectangle r; // Creating an object of Rectangle jho auper class mai define kra tha 
    r.setLength(l);
    r.setWidth(w);
    r.displayArea();

    return 0;
}

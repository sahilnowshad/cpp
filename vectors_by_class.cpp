#include <iostream>
using namespace std;

class Vector {
private:
    int x, y;

public:
    // Constructor to initialize x and y
    Vector(int x = 0, int y = 0) : x(x), y(y) {}

    // Overloading the unary - operator
    Vector operator-() const {
        return Vector(-x, -y);
    }

    // Function to display the vector
    void display() const {
        cout << "Vector: (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Vector v1(5, -3);

    cout << "Original ";
    v1.display();

    Vector v2 = -v1; // Using the overloaded unary - operator

    cout << "Negated ";
    v2.display();

    return 0;
}

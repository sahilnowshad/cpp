#include <iostream>
using namespace std;

class Cube {
private:
    double side;

public:
    // Constructor to initialize side
    Cube(double s) {
        side = s;
    }
    
    // Function to calculate volume of the cube
    double calculateVolume() {
        return side * side * side;
    }
};

int main() {
    double s1, s2, s3;
    
    // Taking input from the user
    cout << "Enter the side of the first cube: ";
    cin >> s1;
    cout << "Enter the side of the second cube: ";
    cin >> s2;
    cout << "Enter the side of the third cube: ";
    cin >> s3;
    
    // Creating multiple Cube objects
    Cube cube1(s1);
    Cube cube2(s2);
    Cube cube3(s3);
    
    // Displaying the volumes
    cout << "The volume of the first cube is: " << cube1.calculateVolume() << endl;
    cout << "The volume of the second cube is: " << cube2.calculateVolume() << endl;
    cout << "The volume of the third cube is: " << cube3.calculateVolume() << endl;
    
    return 0;
}

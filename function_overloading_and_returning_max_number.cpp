#include <iostream>
using namespace std;

class MaxFinder {
public:
    // Function to find max of two integers
    int findMax(int a, int b) {
        return (a > b) ? a : b;
    }
    
    // Function to find max of two doubles
    double findMax(double a, double b) {
        return (a > b) ? a : b;
    }
    
    // Function to find max of three integers
    int findMax(int a, int b, int c) {
        return (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    }
};

int main() {
    MaxFinder maxFinder;
    
    // Testing with integers
    cout << "Max of 3 and 5: " << maxFinder.findMax(3, 5) << endl;
    
    // Testing with doubles
    cout << "Max of 3.5 and 2.7: " << maxFinder.findMax(3.5, 2.7) << endl;
    
    // Testing with three integers
    cout << "Max of 3, 9, and 7: " << maxFinder.findMax(3, 9, 7) << endl;
    
    return 0;
}

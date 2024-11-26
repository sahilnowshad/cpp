#include <iostream>
using namespace std;

int main() {
    int mainChoice, subChoice;

    // Display the main menu
    cout << "Welcome to the Restaurant Menu" << endl;
    cout << "1. Vegetarian" << endl;
    cout << "2. Non-Vegetarian" << endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> mainChoice;

    // Main menu selection
    switch (mainChoice) {
        case 1: // Vegetarian menu
            cout << "\nVegetarian Menu:" << endl;
            cout << "1. Paneer Butter Masala" << endl;
            cout << "2. Veg Biryani" << endl;
            cout << "3. Mixed Vegetable Curry" << endl;
            cout << "Enter your choice (1-3): ";
            cin >> subChoice;

            // Sub-menu for Vegetarian
            switch (subChoice) {
                case 1:
                    cout << "\nYou chose Paneer Butter Masala." << endl;
                    break;
                case 2:
                    cout << "\nYou chose Veg Biryani." << endl;
                    break;
                case 3:
                    cout << "\nYou chose Mixed Vegetable Curry." << endl;
                    break;
                default:
                    cout << "\nInvalid choice in Vegetarian menu." << endl;
            }
            break;

        case 2: // Non-Vegetarian menu
            cout << "\nNon-Vegetarian Menu:" << endl;
            cout << "1. Chicken Curry" << endl;
            cout << "2. Mutton Biryani" << endl;
            cout << "3. Fish Fry" << endl;
            cout << "Enter your choice (1-3): ";
            cin >> subChoice;

            // Sub-menu for Non-Vegetarian
            switch (subChoice) {
                case 1:
                    cout << "\nYou chose Chicken Curry." << endl;
                    break;
                case 2:
                    cout << "\nYou chose Mutton Biryani." << endl;
                    break;
                case 3:
                    cout << "\nYou chose Fish Fry." << endl;
                    break;
                default:
                    cout << "\nInvalid choice in Non-Vegetarian menu." << endl;
            }
            break;

        default:
            cout << "\nInvalid choice in the main menu." << endl;
    }


}

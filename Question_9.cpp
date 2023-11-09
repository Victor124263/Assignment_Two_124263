#include <iostream>

using namespace std;

int main() {
    // Declaration of variables
    int age;
    char movieType;

    // Input and Output
    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter the type of movie (R for regular or 3D for 3D): ";
    cin >> movieType;

    // Main logic operations

    double ticketPrice;

    if (age < 0) {
        cout << "Invalid age. Please enter a valid age.\n";
        return 1; // Exit the program with an error code
    } else if (movieType == 'R' || movieType == 'r') {
        if (age < 12) {
            ticketPrice = 5.0; // Child ticket price for regular movie
        } else if (age >= 12 && age < 65) {
            ticketPrice = 10.0; // Adult ticket price for regular movie
        } else {
            ticketPrice = 7.5; // Senior ticket price for regular movie
        }
    } else if (movieType == '3D' || movieType == '3d') {
        if (age < 12) {
            ticketPrice = 7.0; // Child ticket price for 3D movie
        } else if (age >= 12 && age < 65) {
            ticketPrice = 15.0; // Adult ticket price for 3D movie
        } else {
            ticketPrice = 10.0; // Senior ticket price for 3D movie
        }
    } else {
        cout << "Invalid movie type. Please enter R or 3D.\n";
        return 1; // Exit the program with an error code
    }

    cout << "Ticket price: $" << ticketPrice << endl;

    return 0;
}
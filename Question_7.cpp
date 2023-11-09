#include <iostream>

using namespace std;

int main() {
    //Declaration of variables
    int daysLate;
    char bookType;

    //Input and Output Statements
    cout << "Enter the number of days the book is late: ";
    cin >> daysLate;

    cout << "Enter the type of book (R for regular, C for children's, or D for reference): ";
    cin >> bookType;

    double lateFee;

    if (daysLate <= 0) {
        cout << "No late fee. Thank you for returning the book on time!\n";
    } else {
        if (bookType == 'R' || bookType == 'r') {
            lateFee = 0.5 * daysLate;
        } else if (bookType == 'C' || bookType == 'c') {
            lateFee = 0.3 * daysLate;
        } else if (bookType == 'D' || bookType == 'd') {
            lateFee = 0.7 * daysLate;
        } else {
            cout << "Invalid book type entered. Please enter R, C, or D.\n";
            return 1; // Exit the program with an error code
        }

        cout << "Late fee for the book is: $" << lateFee << endl;
    }

    return 0;
}
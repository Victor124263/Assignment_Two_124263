#include <iostream>

using namespace std;

int main() {
    // Declaration of variables
    double num1, num2;

    // Input for both numbers
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Determine maximum using switch
    switch ((num1 > num2) ? 1 : ((num1 < num2) ? 2 : 0)) {
        case 1:
            cout << "Maximum number is: " << num1 << endl;
            break;
        case 2:
            cout << "Maximum number is: " << num2 << endl;
            break;
        default:
            cout << "The numbers you have entered are equal." << endl;
            break;
    }

    return 0;
}
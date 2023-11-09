#include <iostream>
using namespace std;

int main() {
    // Declaration of variables
    string fullName, course;
    int score;

    // Input for students details
    cout << "Enter full name of the student: ";
    getline(cin, fullName);

    cout << "Enter course: ";
    getline(cin, course);

    cout << "Enter score: ";
    cin >> score;

    // Grading using switch statements
    switch (score / 10) {
        case 10:
        case 9:
            cout << fullName << " scored an A in " << course << "." << endl;
            break;
        case 8:
            cout << fullName << " scored a B in " << course << "." << endl;
            break;
        case 7:
            cout << fullName << " scored a C in " << course << "." << endl;
            break;
        case 6:
            cout << fullName << " scored a D in " << course << "." << endl;
            break;
        default:
            cout << fullName << " scored an F in " << course << "." << endl;
            break;
    }

    return 0;
}
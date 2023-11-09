#include <iostream>

using namespace std;

int main() {
    // Declaration of  variables
    string fullName, course;
    int score;

    // Input to get the info from user line by line
    cout << "Enter full name of the student: ";
    getline(cin, fullName);

    cout << "Enter course: ";
    getline(cin, course);

    cout << "Enter score: ";
    cin >> score;

    // Grading for various scores according to information given
    if (score >= 70) {
        cout << fullName << " scored an A in " << course << "." << endl;
    } else if (score >= 60 && score <= 69) {
        cout << fullName << " scored a B in " << course << "." << endl;
    } else if (score >= 50 && score <= 59) {
        cout << fullName << " scored a C in " << course << "." << endl;
    } else if (score >= 40 && score <= 49) {
        cout << fullName << " scored a D in " << course << "." << endl;
    } else if (score < 40) {
        cout << fullName << " scored an F in " << course << "." << endl;
    } else {
        cout << "Invalid score entered for " << fullName << " in " << course << "." << endl;
    }

    return 0;
}
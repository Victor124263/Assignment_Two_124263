#include <iostream>
using namespace std;

int main() {
    string name;
    int age;
    double bankBalance;
    string crbStatus;
    int monthsAsCustomer;

    // Input customer details
    cout << "Enter customer name: ";                            //Input for customers name
    cin >> name;

    cout << "Enter customer age: ";                             //Input for customer's age
    cin >> age;

    cout << "Enter customer bank balance: ";                    //Input for the customer's bank account balance
    cin >> bankBalance;

    cout << "Enter customer CRB status (good/bad): ";           //Input customers CRB standing
    cin >> crbStatus;

    cout << "Enter customer months as a customer: ";            //Input number of months the customer has been with the bank
    cin >> monthsAsCustomer;

    // Check if customer is eligible for a loan
    if (age > 22 && bankBalance > 50000 && crbStatus == "good" && monthsAsCustomer > 6) {
        cout << "Congratulations," << name << ", you are qualified for a loan with our bank." << endl;
    } else {
        cout << "Sorry, " << name << ", you are not qualified for a loan with our bank." << endl;
    }

    return 0;
}



#include <iostream>

using namespace std;

int main() {
    //Declaration of variables
    double accountBalance = 1000.0; // Initial account balance
    double withdrawalAmount;
    double dailyLimit = 500.0;

    //Input and Output
    cout << "Enter the withdrawal amount: $";
    cin >> withdrawalAmount;

    //Main logic for atm
    if (withdrawalAmount <= 0) {
        cout << "Invalid withdrawal amount. Please enter a positive value.\n";
    } else if (withdrawalAmount > dailyLimit) {
        cout << "Withdrawal amount exceeds the daily limit. Maximum daily limit is $" << dailyLimit << endl;
    } else if (withdrawalAmount > accountBalance) {
        cout << "Insufficient funds. Your account balance is $" << accountBalance << endl;
    } else {
        accountBalance -= withdrawalAmount;
        cout << "Withdrawal successful! Remaining balance: $" << accountBalance << endl;
    }

    return 0;
}

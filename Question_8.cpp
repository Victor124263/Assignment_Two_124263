#include <iostream>

using namespace std;

int main() {
    double purchaseAmount;
    cout << "Enter the total purchase amount: $";
    cin >> purchaseAmount;

    double totalCost;

    if (purchaseAmount < 0) {
        cout << "Invalid purchase amount. Please enter a positive value.\n";
        return 1; // Exit the program with an error code
    } else if (purchaseAmount <= 50) {
        totalCost = purchaseAmount; // No discount for purchases up to $50
    } else if (purchaseAmount <= 100) {
        totalCost = purchaseAmount * 0.9; // 10% discount for purchases between $50 and $100
    } else if (purchaseAmount <= 500) {
        totalCost = purchaseAmount * 0.8; // 20% discount for purchases between $100 and $500
    } else {
        totalCost = purchaseAmount * 0.7; // 30% discount for purchases over $500
    }

    cout << "Total cost after applying discounts: $" << totalCost << endl;

    return 0;
}
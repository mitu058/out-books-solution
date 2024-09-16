#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double A, B, C, D;

    // Read input until end-of-file
    while (cin >> A >> B >> C >> D) {
        // Total price of the items
        double totalPrice = A + B + C;

        // VAT is 15%
        double vatRate = 0.15;
        double vatAmount = totalPrice * vatRate;

        // Discount rate
        double discountRate = D / 100.0;
        double discountAmount = totalPrice * discountRate;

        // Calculate the final amount to be paid
        double amountWithVAT = totalPrice + vatAmount;
        double finalAmount = amountWithVAT - discountAmount;

        // Print the result rounded to two decimal places
        cout << fixed << setprecision(2) << finalAmount << endl;
    }

    return 0;
}

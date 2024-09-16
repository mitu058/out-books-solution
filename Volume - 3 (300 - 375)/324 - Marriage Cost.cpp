#include <iostream>
#include <cmath>    // For the ceil function
#include <iomanip>  // For setting precision

using namespace std;

int main() {
    double M, X, Y, Z;
    int P;

    // Read input until EOF
    while (cin >> M >> P >> X >> Y >> Z) {
        // Check if the percentage is valid (between 0 and 100)
        if (P < 0 || P > 100) {
            cerr << "Error: Percentage P must be between 0 and 100." << endl;
            continue; // Skip the invalid input line
        }

        // Calculate the percentage as a decimal
        double percentageSpent = P / 100.0;
        
        // Calculate the amount spent per month
        double spent = percentageSpent * M;
        
        // Calculate the monthly savings
        double S = M - spent;
        
        // Ensure that S is positive to avoid division by zero
        if (S <= 0) {
            cerr << "Error: Monthly savings must be positive." << endl;
            continue; // Skip the invalid input line
        }
        
        // Calculate the total cost
        double totalCost = X + Y + Z;
        
        // Calculate the minimum time required to save the total cost
        double months = totalCost / S;
        int T = ceil(months); // Round up to the next whole number

        // Output results with fixed precision
        cout << fixed << setprecision(2);
        cout << "Monthly Save = " << S << endl;
        cout << "Total Cost = " << totalCost << endl;
        cout << "Minimum Time = " << T << " Months" << endl;
    }

    return 0;
}

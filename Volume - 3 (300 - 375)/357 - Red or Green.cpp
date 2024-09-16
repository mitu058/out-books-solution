#include <iostream>
using namespace std;

int main() {
    int red_numerator, red_denominator;
    int green_numerator, green_denominator;

    // Read input until EOF
    while (cin >> red_numerator >> red_denominator >> green_numerator >> green_denominator) {
        // Perform cross-multiplication to compare fractions
        int red_comparison = red_numerator * green_denominator;
        int green_comparison = green_numerator * red_denominator;

        // Determine and print the result
        if (red_comparison > green_comparison) {
            cout << "Red" << endl;
        } else if (red_comparison < green_comparison) {
            cout << "Green" << endl;
        } else {
            cout << "Equal" << endl;
        }
    }

    return 0;
}

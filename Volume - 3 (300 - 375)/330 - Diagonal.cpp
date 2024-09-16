#include <iostream>
#include <iomanip>  // For setting precision
#include <cmath>    // For sqrt function

using namespace std;

int main() {
    int X;

    // Read input until EOF
    while (cin >> X) {
        // Calculate the length of the diagonal
        double diagonal = X * sqrt(2);
        
        // Output the length rounded to 2 decimal places
        cout << fixed << setprecision(2) << diagonal << endl;
    }

    return 0;
}

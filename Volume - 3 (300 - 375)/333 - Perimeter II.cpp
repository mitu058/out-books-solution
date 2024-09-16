#include <iostream>
#include <iomanip>  // For setting precision
#include <cmath>    // For sqrt function

using namespace std;

int main() {
    int X;

    // Read input until EOF
    while (cin >> X) {
        // Calculate the perimeter using the given diagonal length
        double perimeter = 2 * X * sqrt(2);
        
        // Output the perimeter rounded to 2 decimal places
        cout << fixed << setprecision(2) << perimeter << endl;
    }

    return 0;
}

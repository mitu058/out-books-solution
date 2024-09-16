#include <iostream>
#include <cmath> // For pow function
using namespace std;

int main() {
    long long X, Y;

    // Read input until end-of-file
    while (cin >> X >> Y) {
        // Calculate X^Y + Y^X
        long long result = pow(X, Y) + pow(Y, X);

        // Print the result
        cout << result << endl;
    }

    return 0;
}

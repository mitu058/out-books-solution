#include <iostream>
using namespace std;

int main() {
    int X, Y, Z;

    // Read input until end-of-file
    while (cin >> X >> Y >> Z) {
        // Calculate the value of the equation A = X^2 + Y^2 - Z^2
        int A = X * X + Y * Y - Z * Z;
        
        // Print the result
        cout << A << endl;
    }

    return 0;
}

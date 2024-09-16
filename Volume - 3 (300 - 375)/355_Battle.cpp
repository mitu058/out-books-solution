#include <iostream>
#include <cmath> // for sqrt() function
using namespace std;

int main() {
    int A, B, X, Y;

    // Read input until EOF
    while (cin >> A >> B >> X >> Y) {
        // Calculate the length of the I-shaped line (Jalal's wall)
        double jalalLength = sqrt(A * A + B * B);
        
        // Calculate the length of the straight line (Pratap's wall)
        double pratapLength = X + Y;
        
        // Determine the winner
        if (jalalLength > pratapLength) {
            cout << "Jalal Wins" << endl;
        } else if (jalalLength < pratapLength) {
            cout << "Pratap Wins" << endl;
        } else {
            cout << "They make friendship" << endl;
        }
    }

    return 0;
}

#include <iostream>
using namespace std;

// Function to determine the modifier based on the value range
int getModifier(int value) {
    if (value >= 10 && value <= 19) {
        return 10;
    } else if (value >= 20 && value <= 49) {
        return 25;
    } else if (value >= 50 && value <= 100) {
        return 55;
    }
    return 0; // Default case, although not expected with given constraints
}

int main() {
    int X, Y;

    // Read input until EOF
    while (cin >> X >> Y) {
        // Check if X and Y are in the same range
        if (getModifier(X) != getModifier(Y)) {
            cerr << "Error: X and Y should be in the same range" << endl;
            continue;
        }

        int modifier = getModifier(X); // Modifier based on the range of X (or Y, which should be in the same range)

        if (X == Y) {
            // If X and Y are the same, multiply and apply modifier
            int result = X * Y * modifier;
            cout << result << endl;
        } else {
            // If X and Y are different, add and apply modifier
            int result = X + Y + modifier;
            cout << result << endl;
        }
    }

    return 0;
}

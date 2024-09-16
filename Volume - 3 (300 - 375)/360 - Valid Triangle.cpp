#include <iostream>
using namespace std;

int main() {
    int A, B, C;

    // Process input until EOF
    while (cin >> A >> B >> C) {
        // Ensure A, B, and C are positive integers
        if (A <= 0 || B <= 0 || C <= 0) {
            cout << "NO" << endl;
            continue;
        }

        // Sort A, B, and C to ensure A <= B <= C
        if (A > B) swap(A, B);
        if (B > C) swap(B, C);
        if (A > B) swap(A, B);

        // Check the triangle inequality
        if (A + B > C) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

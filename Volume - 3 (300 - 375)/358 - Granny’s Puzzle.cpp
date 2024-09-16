#include <iostream>
using namespace std;

int main() {
    int A, B, C, D, E;
    
    // Read input until EOF
    while (cin >> A >> B >> C >> D >> E) {
        // Calculate the result of the expression
        int result = A - B + C - D + E;

        // Determine the output based on the result
        if (result == 0) {
            cout << "Welcome Anna" << endl;
        } else if (result % 11 == 0) {
            cout << "Anna can enter" << endl;
        } else {
            cout << "Anna cannot enter" << endl;
        }
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int u, a, t;

    // Read input until EOF
    while (cin >> u >> a >> t) {
        // Calculate the final velocity using the formula v = u + at
        int v = u + a * t;

        // Output the result
        cout << v << endl;
    }

    return 0;
}

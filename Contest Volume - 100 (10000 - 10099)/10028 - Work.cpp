#include <iostream>
using namespace std;

int main() {
    int F, d;

    // Read input until EOF
    while (cin >> F >> d) {
        // Calculate work
        int W = F * d;
        
        // Print result
        cout << W << endl;
    }

    return 0;
}

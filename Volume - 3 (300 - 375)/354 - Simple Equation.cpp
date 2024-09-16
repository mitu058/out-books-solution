#include <iostream>
using namespace std;

int main() {
    int m, n;
    
    // Read input until EOF
    while (cin >> m >> n) {
        // Calculate x and y using the derived formulas
        int x = (m + n) / 2;
        int y = (m - n) / 2;
        
        // Print the result
        cout << x << " " << y << endl;
    }
    
    return 0;
}

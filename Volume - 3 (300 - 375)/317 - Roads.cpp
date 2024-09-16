#include <iostream>
#include <iomanip> // For std::setprecision

using namespace std;

int main() {
    int T, M;
    
    // Read input until EOF
    while (cin >> T >> M) {
        // Calculate the total distance N
        double N = (4.0 * T * M) / 11.0;
        
        // Output the result rounded to 2 decimal places
        cout << fixed << setprecision(2) << N << endl;
    }

    return 0;
}

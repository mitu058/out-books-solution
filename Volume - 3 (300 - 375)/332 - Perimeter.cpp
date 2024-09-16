#include <iostream>
#include <iomanip>  // For setting precision

using namespace std;

int main() {
    int W, P;

    // Read input until EOF
    while (cin >> W >> P) {
        // Calculate the height
        double H = (P / 100.0) * W;
        
        // Calculate the perimeter
        double perimeter = 2 * (W + H);
        
        // Output the perimeter rounded to 2 decimal places
        cout << fixed << setprecision(2) << perimeter << endl;
    }

    return 0;
}

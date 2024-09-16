#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double S;

    while (cin >> S) {
        // Calculate the side length L of the cube
        double L = sqrt(S / 6.0);

        // Calculate the volume of the cube
        double volume = L * L * L;
        
        // Output the volume rounded to two decimal places
        cout << fixed << setprecision(2) << volume << endl;
    }

    return 0;
}

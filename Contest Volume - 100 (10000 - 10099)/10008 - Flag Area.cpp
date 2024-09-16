#include <iostream>
#include <iomanip>
#include <cmath> // For M_PI and pow
using namespace std;

int main() {
    int W;
    const double PI = 3.1416;

    // Read input until end-of-file
    while (cin >> W) {
        // Calculate length from width
        double L = (10.0 / 6.0) * W;

        // Calculate radius of the red disc
        double radius = L / 5.0;

        // Calculate area of the flag
        double areaFlag = L * W;

        // Calculate area of the red disc
        double areaRedDisc = PI * pow(radius, 2);

        // Calculate area of the green part
        double areaGreenPart = areaFlag - areaRedDisc;

        // Print the result rounded to two decimal places
        cout << fixed << setprecision(2) << areaGreenPart << endl;
    }

    return 0;
}

#include <iostream>
#include <iomanip>
#include <cmath> // for M_PI
using namespace std;

int main() {
    int W;

    while (cin >> W) {
        // Length and Width of the flag
        double length = (10.0 / 6.0) * W; // Total length based on the width
        double areaFlag = length * W; // Area of the flag

        // Radius of the red circle
        double radius = length / 5.0; // Radius is 1/5 of length
        double areaCircle = 3.1416 * radius * radius; // Area of the circle

        // Area of the green part
        double areaGreen = areaFlag - areaCircle;

        // Output the area of the green part rounded to 2 decimal places
        cout << fixed << setprecision(2) << areaGreen << endl;
    }

    return 0;
}

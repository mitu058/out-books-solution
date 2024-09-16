#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int a, b, c;

    while (cin >> a >> b >> c) {
        // Check for triangle validity
        if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a) {
            // Invalid triangle
            cout << fixed << setprecision(2) << 0.00 << endl;
        } else {
            // Calculate the semi-perimeter
            double s = (a + b + c) / 2.0;
            // Calculate the area using Heron's formula
            double area = sqrt(s * (s - a) * (s - b) * (s - c));
            // Output the area rounded to 2 decimal points
            cout << fixed << setprecision(2) << area << endl;
        }
    }

    return 0;
}

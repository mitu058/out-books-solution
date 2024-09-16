#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const double PI = 3.1416;
    double C;

    while (cin >> C) {
        // Calculate the radius of the circle
        double radius = C / (2 * PI);
        
        // Output the result rounded to two decimal places
        cout << fixed << setprecision(2) << radius << endl;
    }

    return 0;
}

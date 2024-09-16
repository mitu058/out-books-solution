#include <iostream>
#include <iomanip> // For setting precision

using namespace std;

int main()
{
    int L;

    // Read input until EOF
    while (cin >> L)
    {
        // Calculate the area in square centimeters
        double area_cm2 = (L * L) / 2.0;

        // Convert the area to square meters
        double area_m2 = area_cm2 / 10000.0;

        // Output the area rounded to 2 decimal places
        cout << fixed << setprecision(2) << area_m2 << " m^2" << endl;
    }

    return 0;
}

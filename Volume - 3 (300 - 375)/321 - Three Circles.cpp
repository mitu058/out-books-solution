#include <iostream>
#include <iomanip> // For setting precision

using namespace std;

const double PI = 3.1416;

int main()
{
    int R;

    // Read input until EOF
    while (cin >> R)
    {
        // Calculate the radii of the circles
        double R2 = R / 2.0;
        double R3 = R2 / 2.0;

        // Calculate the areas of the circles
        double Area1 = PI * R * R;
        double Area2 = PI * R2 * R2;
        double Area3 = PI * R3 * R3;

        // Calculate the total area
        double TotalArea = Area1 + Area2 + Area3;

        // Output the result rounded to 2 decimal places
        cout << fixed << setprecision(2) << TotalArea << endl;
    }

    return 0;
}

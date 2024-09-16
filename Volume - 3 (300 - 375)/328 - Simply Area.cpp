#include <iostream>
#include <iomanip> // For setprecision
#include <cmath>   // For ceil function

using namespace std;

int main()
{
    double H;

    // Read input until EOF
    while (cin >> H)
    {
        // Calculate width
        double W = 4 * H;

        // Calculate rectangle area
        double rectangleArea = H * W;

        // Calculate triangle area
        double triangleArea = 2 * H * H;

        // Output the rectangle area rounded to 2 decimal places
        cout << "Area of Rectangle: " << fixed << setprecision(2) << rectangleArea << endl;

        if (ceil(triangleArea) - floor(ceil(triangleArea)) == 0)
            cout << "Area of Triangle: " << setprecision(0) << ceil(triangleArea) << endl;
        else
            cout << "Area of Triangle: " << ceil(triangleArea) << endl;

        cout << endl;
    }

    return 0;
}

#include <iostream>
#include <iomanip> // For setting precision

using namespace std;

int main()
{
    int A, H;

    // Read input until EOF
    while (cin >> A >> H)
    {
        // Calculate the area of the trapezium
        double area = 1.5 * A * H;

        // Output the result rounded to 2 decimal places
        cout << fixed << setprecision(2) << area << endl;
    }

    return 0;
}

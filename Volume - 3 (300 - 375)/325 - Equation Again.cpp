#include <iostream>
#include <iomanip> // For setprecision
#include <cmath>   // For pow

using namespace std;

int main()
{
    int m;

    // Read input until EOF
    while (cin >> m)
    {
        // Calculate (m + 1/m)^4
        double result = pow((m + 1.0 / m), 4);

        // Output the result rounded to 3 decimal places
        cout << fixed << setprecision(3) << result << endl;
    }

    return 0;
}

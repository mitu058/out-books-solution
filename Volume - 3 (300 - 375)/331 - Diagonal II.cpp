#include <iostream>
#include <iomanip> // For setting precision
#include <cmath>   // For sqrt function

using namespace std;

int main()
{
    int H;

    // Read input until EOF
    while (cin >> H)
    {
        // Calculate the width
        double W = 1.5 * H;

        // Calculate the length of the diagonal
        double diagonal = sqrt(H * H + W * W);

        // Output the diagonal length rounded to 2 decimal places
        cout << fixed << setprecision(2) << diagonal << endl;
    }

    return 0;
}

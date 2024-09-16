#include <iostream>

using namespace std;

int main()
{
    int X, Y;

    // Read input until EOF
    while (cin >> X >> Y)
    {
        // Calculate the sum of X and Y
        int sum = X + Y;
        // Output the result
        cout << sum << endl;
    }

    return 0;
}

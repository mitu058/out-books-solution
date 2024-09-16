#include <iostream>

using namespace std;

int main()
{
    int m, n, o, p;

    // Read input until EOF
    while (cin >> m >> n >> o >> p)
    {
        // Calculate the differences
        int diff1 = m - n;
        int diff2 = o - p;

        // Calculate the sum of the differences
        int result = diff1 + diff2;

        // Print the result
        cout << result << endl;
    }

    return 0;
}

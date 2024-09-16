#include <iostream>
using namespace std;

int main()
{
    int A, B, C, D;

    // Read input until EOF
    while (cin >> A >> B >> C >> D)
    {
        // Calculate the difference between (A * B) and (C * D)
        int result = (A * B) - (C * D);

        // Print the result
        cout << result << endl;
    }

    return 0;
}

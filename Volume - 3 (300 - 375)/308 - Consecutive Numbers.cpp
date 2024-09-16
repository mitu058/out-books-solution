#include <iostream>
using namespace std;

int main()
{
    int N;

    // Read input until EOF
    while (cin >> N)
    {
        // Calculate the middle integer
        int x = N / 3;

        // Calculate the three consecutive integers
        int num1 = x - 1;
        int num2 = x;
        int num3 = x + 1;

        // Print the three integers separated by spaces
        cout << num1 << " " << num2 << " " << num3 << endl;
    }

    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int M, N;

    // Read input until EOF
    while (cin >> M >> N)
    {
        // Calculate the total number of teddy bears
        int total = M * N;

        // Output the result
        cout << total << endl;
    }

    return 0;
}

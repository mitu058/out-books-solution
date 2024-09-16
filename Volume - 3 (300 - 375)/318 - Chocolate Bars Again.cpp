#include <iostream>

using namespace std;

int main()
{
    long long M, N;

    // Read input until EOF
    while (cin >> M >> N)
    {
        // Calculate the total number of chocolate bars
        long long total = (M + 5 * N);

        // Output the result
        cout << total << endl;
    }

    return 0;
}

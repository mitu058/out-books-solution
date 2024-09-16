#include <iostream>

using namespace std;

int main()
{
    int M, N;

    while (cin >> M >> N)
    {

        int daily_remaining = M - N;
        long long total = daily_remaining * 365;

        int last_two_digits = total % 100;

        cout << total << endl;
        cout << last_two_digits << endl;
    }

    return 0;
}

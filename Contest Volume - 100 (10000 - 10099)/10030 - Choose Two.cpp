#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long N;
    while (cin >> N) {
        // Calculate the number of ways to select 2 people from N people
        long long result = (N * (N - 1)) / 2;
        // Output the result
        cout << result << "\n";
    }

    return 0;
}

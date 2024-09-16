#include <iostream>
using namespace std;

int main() {
    long long N;
    while (cin >> N) {
        // Calculate the minimum number of swaps needed to reverse the arrangement
        long long result = (N / 2) * (N - 1);
        cout << result << endl;
    }
    return 0;
}

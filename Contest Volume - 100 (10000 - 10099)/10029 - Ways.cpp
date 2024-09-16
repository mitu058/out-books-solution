#include <iostream>
#include <vector>
#include <string>
#include <limits>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    while (cin >> N) {
        vector<string> paths(N);
        vector<int> pathSums(N, 0);

        // Read paths and calculate their sums
        for (int i = 0; i < N; ++i) {
            cin >> paths[i];
            int sum = 0;
            for (char ch : paths[i]) {
                sum += ch - '0'; // Convert char digit to integer and add to sum
            }
            pathSums[i] = sum;
        }

        // Find the path with the minimum sum
        int minSum = numeric_limits<int>::max();
        int minIndex = -1;
        for (int i = 0; i < N; ++i) {
            if (pathSums[i] < minSum) {
                minSum = pathSums[i];
                minIndex = i + 1; // 1-based index
            }
        }

        // Output the result
        cout << minIndex << "\n";
    }

    return 0;
}

#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

// Function to calculate the number of partitions of n
int countPartitions(int n) {
    // Create a vector to store the number of partitions for each number up to n
    vector<int> dp(n + 1, 0);
    dp[0] = 1;  // There is one way to partition 0 (using no parts)

    // Populate the dp array with the number of partitions
    for (int i = 1; i <= n; ++i) {
        for (int j = i; j <= n; ++j) {
            dp[j] += dp[j - i];
        }
    }

    return dp[n];
}

int main() {
    string line;
    int caseNumber = 1;

    // Read input lines until EOF
    while (getline(cin, line)) {
        istringstream iss(line);
        int n;
        iss >> n;

        // Calculate the number of partitions and output the result
        cout << "Case " << caseNumber << ": " << countPartitions(n) << endl;
        ++caseNumber;
    }

    return 0;
}

#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    set<long long> multiPowerNumbers;
    vector<int> queries;
    int maxQuery = 0;

    // Reasonable limits for bases and exponents
    const int maxBase = 100;
    const long long limit = 1e12;

    // Generate multi-power numbers
    for (int base = 2; base <= maxBase; ++base) {
        long long power = base * base; // Start from base^2
        while (power <= limit) {
            for (int exp = 2; exp <= 20; ++exp) { // Restrict exponent range to avoid excessive powers
                multiPowerNumbers.insert(power);
                if (power > limit / base) break; // Prevent overflow
                power *= base;
            }
            power = base * base; // Reset power for next base
        }
    }

    // Read inputs and find the maximum query
    int n;
    while (cin >> n) {
        queries.push_back(n);
        if (n > maxQuery) maxQuery = n;
    }

    // Sort the multi-power numbers
    vector<long long> sortedMultiPowerNumbers(multiPowerNumbers.begin(), multiPowerNumbers.end());
    sort(sortedMultiPowerNumbers.begin(), sortedMultiPowerNumbers.end());

    // Output the results for each query
    for (int query : queries) {
        if (query <= sortedMultiPowerNumbers.size()) {
            cout << sortedMultiPowerNumbers[query - 1] << endl;
        } else {
            cout << "Query out of range" << endl;
        }
    }

    return 0;
}

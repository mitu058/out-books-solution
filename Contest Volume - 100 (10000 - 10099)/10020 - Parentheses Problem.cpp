#include <iostream>
#include <vector>

using namespace std;

// Function to compute Catalan numbers up to n using dynamic programming
vector<long long> computeCatalanNumbers(int max_n) {
    vector<long long> catalan(max_n + 1, 0);
    catalan[0] = 1; // C(0) = 1
    
    for (int i = 1; i <= max_n; ++i) {
        catalan[i] = 0;
        for (int j = 0; j < i; ++j) {
            catalan[i] += catalan[j] * catalan[i - 1 - j];
        }
    }
    return catalan;
}

int main() {
    int max_n = 20; // As per the problem statement
    vector<long long> catalan = computeCatalanNumbers(max_n);

    int n;
    int case_number = 1;
    while (cin >> n) {
        cout << "Case " << case_number << ": " << catalan[n] << endl;
        ++case_number;
    }

    return 0;
}

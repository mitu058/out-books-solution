#include <iostream>
using namespace std;

int main() {
    int M, N, K, D1;

    // Process input until EOF
    while (cin >> M >> N >> K >> D1) {
        // Check for invalid input
        if (M <= 0 || N <= 0 || K <= 0) {
            cout << "Invalid" << endl;
            continue;
        }

        // Calculate the total amount of medicine needed for 75% reduction
        double total_medicine_needed = (M + N + K) * 15 * 0.75;

        // Calculate the amount of medicine Nezam can take in D1 days
        double total_medicine_available = (M + N + K) * 3 * D1;

        // Determine if Nezam can attend the contest
        if (total_medicine_available >= total_medicine_needed) {
            cout << "Nezam can attend" << endl;
        } else {
            cout << "Nezam cannot attend" << endl;
        }
    }

    return 0;
}

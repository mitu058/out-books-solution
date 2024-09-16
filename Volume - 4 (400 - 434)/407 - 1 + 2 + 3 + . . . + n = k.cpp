#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int k;
    while (cin >> k) {
        // Calculate discriminant
        long long discriminant = 1 + 8 * k;
        long long sqrt_discriminant = static_cast<long long>(sqrt(discriminant));

        // Check if discriminant is a perfect square
        if (sqrt_discriminant * sqrt_discriminant != discriminant) {
            cout << "No valid n" << endl;
            continue;
        }

        // Calculate n using the positive root of the quadratic formula
        int n = (sqrt_discriminant - 1) / 2;

        // Verify that the calculated n is correct
        if (n * (n + 1) / 2 == k) {
            cout << n << endl;
        } else {
            cout << "No valid n" << endl;
        }
    }
    return 0;
}

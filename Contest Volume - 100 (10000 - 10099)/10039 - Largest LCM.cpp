#include <iostream>
#include <algorithm>

// Function to compute the Greatest Common Divisor (GCD)
long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to compute the Least Common Multiple (LCM)
long long lcm(long long a, long long b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    int T;
    std::cin >> T;

    while (T--) {
        long long N;
        std::cin >> N;

        // Compute LCM for pairs (N, N-1) and (N, N-2)
        long long result1 = lcm(N, N - 1);
        long long result2 = (N > 1) ? lcm(N, N - 2) : 0;

        // Output the largest LCM
        std::cout << std::max(result1, result2) << std::endl;
    }

    return 0;
}

#include <iostream>

int main() {
    int m, n;

    // Read input until EOF
    while (std::cin >> m >> n) {
        // Compute the sum of m and n
        int sum = m + n;

        // Print the result
        std::cout << sum << std::endl;
    }

    return 0;
}

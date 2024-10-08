#include <iostream>
#include <algorithm> // For std::gcd in C++17

// Function to compute GCD of two numbers
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int T;
    std::cin >> T;

    for (int case_number = 1; case_number <= T; ++case_number) {
        int N1, N2;
        std::cin >> N1 >> N2;
        
        // Calculate GCD of N1 and N2
        int g = gcd(N1, N2);

        // Check if they are co-prime
        if (g == 1) {
            std::cout << "Case " << case_number << ": Yes" << std::endl;
        } else {
            std::cout << "Case " << case_number << ": No" << std::endl;
        }
    }

    return 0;
}

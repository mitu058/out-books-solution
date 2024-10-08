#include <iostream>
#include <cmath>

// Function to find the level X given the number of leaf nodes N
int findLevel(unsigned long long N) {
    // Compute the level X such that 2^X = N
    return static_cast<int>(log2(N));
}

int main() {
    unsigned long long N;
    while (std::cin >> N) {
        // Calculate the level for the given number of leaf nodes
        int level = findLevel(N);
        // Output the result in the required format
        std::cout << level << std::endl;
    }
    return 0;
}

#include <iostream>

int main() {
    int M, N;
    
    while (std::cin >> M >> N) {
        // Calculate the son's age S
        int S = (15 * N - 15 + 5 * M - 5) / (M - N);
        // Calculate the father's age F
        int F = M * S - 5 * M + 5;
        
        std::cout << "Father's Age is: " << F << std::endl;
        std::cout << "Son's Age is: " << S << std::endl;
    }
    
    return 0;
}

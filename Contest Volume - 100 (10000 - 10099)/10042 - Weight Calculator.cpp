#include <iostream>
#include <string>

int calculateWeight(const std::string& s) {
    int totalWeight = 0;
    for (char c : s) {
        totalWeight += static_cast<int>(c);
    }
    return totalWeight;
}

int main() {
    std::string line;

    // Read input until EOF
    while (std::getline(std::cin, line)) {
        // Calculate the weight of the current line
        int weight = calculateWeight(line);
        // Output the result
        std::cout << weight << std::endl;
    }

    return 0;
}

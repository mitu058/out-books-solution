#include <iostream>
#include <string>
#include <unordered_set>

bool isAcheve(const std::string& s) {
    std::unordered_set<char> unique_chars;

    // Add all characters to the set (ignoring spaces)
    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            unique_chars.insert(c);
        }
    }

    // Check if the set contains all 26 letters
    return unique_chars.size() == 26;
}

int main() {
    int N;
    std::cin >> N;
    std::cin.ignore(); // Ignore newline after the number of strings

    for (int i = 0; i < N; ++i) {
        std::string line;
        std::getline(std::cin, line);
        
        if (isAcheve(line)) {
            std::cout << "Yes" << std::endl;
        } else {
            std::cout << "No" << std::endl;
        }
    }

    return 0;
}

#include <iostream>
#include <sstream> // For ostringstream
#include <vector>
#include <string>  // For std::string

int main() {
    std::ios::sync_with_stdio(false); // For faster input/output
    std::cin.tie(NULL);

    int T;
    std::cin >> T;
    std::cin.ignore(); // To ignore newline after the number of test cases

    std::vector<std::string> results;

    for (int case_number = 1; case_number <= T; ++case_number) {
        int X, Y, Z, A;
        std::cin >> X >> Y >> Z >> A;
        std::cin.ignore(); // To ignore newline after each test case input

        // Calculate the number of undetected errors
        int detected_errors = X + Y - Z;
        int undetected_errors = A - detected_errors;

        // Format the result for the current test case
        std::ostringstream oss;
        oss << "Case " << case_number << ": " << undetected_errors;
        results.push_back(oss.str());
    }

    // Print all results
    for (size_t i = 0; i < results.size(); ++i) {
        std::cout << results[i] << std::endl;
    }

    return 0;
}

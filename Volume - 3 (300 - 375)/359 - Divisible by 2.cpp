#include <iostream>
using namespace std;

int main() {
    string line;
    // Read input until EOF
    while (getline(cin, line)) {
        // Check if the line is not empty
        if (!line.empty()) {
            // Access the last character of the string
            char lastChar = line[line.size() - 1];
            int lastDigit = lastChar - '0'; // Convert char to integer

            if (lastDigit % 2 == 0) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}

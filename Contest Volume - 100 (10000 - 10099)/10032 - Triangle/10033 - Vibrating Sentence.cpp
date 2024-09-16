#include <iostream>
#include <string>
#include <cctype> // for std::toupper and std::tolower

using namespace std;

int main() {
    int N;
    string str;

    while (cin >> N) {
        cin.ignore(); // Ignore newline character left in the buffer
        getline(cin, str);

        // Length of the string
        int len = str.length();

        // Result string
        string result;

        // Process the string in chunks of size N
        for (int i = 0; i < len; i += N) {
            // Determine the end index of the current chunk
            int end = min(i + N, len);
            // Extract the current chunk
            string chunk = str.substr(i, end - i);
            // Determine the chunk index to decide its case
            if ((i / N) % 2 == 0) {
                // Convert chunk to uppercase
                for (int j = 0; j < chunk.length(); ++j) {
                    chunk[j] = toupper(chunk[j]);
                }
            } else {
                // Convert chunk to lowercase
                for (int j = 0; j < chunk.length(); ++j) {
                    chunk[j] = tolower(chunk[j]);
                }
            }
            // Append the processed chunk to the result
            result += chunk;
        }

        // Output the final result
        cout << result << endl;
    }

    return 0;
}

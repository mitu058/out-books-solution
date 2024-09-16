#include <iostream>
#include <string>

using namespace std;

bool isSubsequence(const string &word1, const string &word2) {
    int m = word1.length();
    int n = word2.length();
    int j = 0;  // Pointer for word2

    // Traverse word1 and try to match characters of word2
    for (int i = 0; i < m && j < n; i++) {
        if (word1[i] == word2[j]) {
            j++;
        }
    }
    
    // If j equals n, all characters of word2 have been matched
    return (j == n);
}

int main() {
    string line;
    
    while (getline(cin, line)) {
        size_t spacePos = line.find(' ');
        if (spacePos != string::npos) {
            string word1 = line.substr(0, spacePos);
            string word2 = line.substr(spacePos + 1);

            if (isSubsequence(word1, word2)) {
                cout << "Possible" << endl;
            } else {
                cout << "Impossible" << endl;
            }
        }
    }

    return 0;
}

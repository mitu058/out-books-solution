#include <iostream>
#include <sstream> // For std::stringstream

using namespace std;

int main() {
    int caseNumber = 1;
    string line;
    
    while (getline(cin, line)) {
        // Convert the input line to an integer using stringstream
        stringstream ss(line);
        int N;
        ss >> N;
        
        // Compute the digital root
        int digitalRoot = (N == 0) ? 0 : ((N % 9 == 0) ? 9 : (N % 9));
        
        // Print the result
        cout << "Case #" << caseNumber << ": " << digitalRoot << endl;
        
        // Increment the case number
        caseNumber++;
    }
    
    return 0;
}

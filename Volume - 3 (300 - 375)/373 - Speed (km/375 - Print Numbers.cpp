#include <iostream>
#include <sstream>
#include <string>
using namespace std;

string convertNumberToString(int N) {
    // Check for out of range or zero
    if (N == 0 || N < -26 || N > 26) {
        return "Error!!";
    }

    // Determine if the number is divisible by 3
    bool divisibleBy3 = (N % 3 == 0);

    // Create a string stream to build the result string
    stringstream resultStream;
    
    if (N > 0) {
        resultStream << "+" << N << "+" << char('A' + N - 1);
    } else {
        resultStream << N << "-" << char('a' - N - 1); // Convert negative number to corresponding letter
    }

    // Get the result from the stringstream
    string result = resultStream.str();

    // If divisible by 3, enclose in single parentheses
    if (divisibleBy3) {
        result = "(" + result + ")";
    }

    return result;
}

int main() {
    int N;
    while (cin >> N) {
        cout << convertNumberToString(N) << endl;
    }
    return 0;
}

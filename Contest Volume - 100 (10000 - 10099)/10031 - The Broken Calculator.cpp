#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string line;
    while (getline(cin, line)) {
        // Extract the components from the line
        istringstream iss(line);
        int M, N;
        char op;
        iss >> M >> op >> N;

        // Stop the loop if both M and N are zero
        if (M == 0 && N == 0) {
            break;
        }

        // Prepare and calculate the result based on the operator
        if (op == '+') {
            cout << M << " - ( - " << N << " ) = " << (M - (-N)) << "\n";
        } else if (op == '-') {
            cout << M << " - " << N << " = " << (M - N) << "\n";
        }
    }

    return 0;
}

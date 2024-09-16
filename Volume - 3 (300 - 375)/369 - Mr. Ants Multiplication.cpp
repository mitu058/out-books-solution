#include <iostream>
using namespace std;

int main() {
    int M, N;
    while (cin >> M >> N) {
        // Apply the discovered pattern
        int result = (M - 1) + (N - 1) + 1;
        // Print the result in the required format
        cout << M << " * " << N << " = " << result << endl;
    }
    return 0;
}

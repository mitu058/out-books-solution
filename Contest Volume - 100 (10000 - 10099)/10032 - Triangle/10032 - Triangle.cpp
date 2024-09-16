#include <iostream>
using namespace std;

int main() {
    int N;
    while (cin >> N) {
        // Calculate the number of triangles using the formula
        int M = (N * (N + 1)) / 2 + 1;
        cout << M << endl;
    }
    return 0;
}

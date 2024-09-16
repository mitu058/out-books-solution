#include <iostream>
using namespace std;

int main() {
    long long N;
    while (cin >> N) {
        if (N < 3) {
            break; // Terminate if N is less than 3
        }
        // Calculate the number of triangles using the combination formula
        long long num_triangles = (N * (N - 1) * (N - 2)) / 6;
        // Output the result
        cout << num_triangles << endl;
    }
    return 0;
}

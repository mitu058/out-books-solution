#include <iostream>
using namespace std;

int main() {
    int N;
    while (cin >> N) {
        // Calculate the sum of internal angles of a polygon with N sides
        int sum_of_angles = (N - 2) * 180;
        // Output the result
        cout << sum_of_angles << endl;
    }
    return 0;
}

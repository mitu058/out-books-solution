#include <iostream>
using namespace std;

int main() {
    int L;

    // Read input until EOF
    while (cin >> L) {
        // Determine the lengths of the four squares based on whether L is odd or even
        int side1 = L;
        int side2 = side1 + 2;
        int side3 = side2 + 2;
        int side4 = side3 + 2;

        // Calculate the areas of the four squares
        int area1 = side1 * side1;
        int area2 = side2 * side2;
        int area3 = side3 * side3;
        int area4 = side4 * side4;

        // Calculate the total sum of the areas
        int total_area = area1 + area2 + area3 + area4;

        // Output the result
        cout << total_area << endl;
    }

    return 0;
}

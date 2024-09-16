#include <iostream>
using namespace std;

int main() {
    int x, y;
    while (cin >> x >> y) {
        if (x == 0 && y == 0) {
            break;  // Termination condition
        }
        // Calculate the maximum of the two numbers
        int max_val = (x > y) ? x : y;
        // Calculate the sum of the two numbers
        int sum_val = x + y;
        
        // Print the results
        cout << max_val << " " << sum_val << endl;
    }
    return 0;
}

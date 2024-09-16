#include <iostream>
using namespace std;

int main() {
    int x, y;
    
    while (true) {
        cin >> x >> y;
        if (x == 0 && y == 0) {
            break;  // Exit loop when encountering '0 0'
        }
        // Output the maximum value of x and y
        cout << max(x, y) << endl;
    }
    
    return 0;
}

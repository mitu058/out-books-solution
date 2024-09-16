#include <iostream>

using namespace std;

int main() {
    int m, n;
    
    // Read pairs of integers until EOF
    while (cin >> m >> n) {
        cout << m * n << endl;
    }
    
    return 0;
}

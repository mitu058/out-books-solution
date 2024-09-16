#include <iostream>
using namespace std;

int main() {
    int n;

    // Read integers until EOF
    while (cin >> n) {
        if (n % 3 == 0) {
            cout << n << " is divisible by 3" << endl;
        } else if (n % 5 == 0) {
            cout << n << " is divisible by 5" << endl;
        } else if (n % 7 == 0) {
            cout << n << " is divisible by 7" << endl;
        } else {
            cout << "Confused" << endl;
        }
    }

    return 0;
}

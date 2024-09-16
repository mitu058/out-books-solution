#include <iostream>
using namespace std;

int main() {
    int X;

    // Read input until end-of-file
    while (cin >> X) {
        if (X % 2 == 0) {
            cout << "Happy" << endl;
        } else {
            cout << "Unhappy" << endl;
        }
    }

    return 0;
}

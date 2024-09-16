#include <iostream>
using namespace std;

int main() {
    int A, B, C;

    while (cin >> A >> B >> C) {
        int govtFare = A * B;
        if (C < govtFare) {
            cout << "Gainer" << endl;
        } else if (C > govtFare) {
            cout << "Loser" << endl;
        } else {
            cout << "Perfect" << endl;
        }
    }

    return 0;
}

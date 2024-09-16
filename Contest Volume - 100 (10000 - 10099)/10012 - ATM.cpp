#include <iostream>
using namespace std;

int main() {
    int W, B;

    // Process input until EOF
    while (cin >> W >> B) {
        // Check for invalid transactions
        if (W % 100 != 0 || W > B) {
            cout << "Invalid Transaction" << endl;
            continue;
        }

        // Calculate number of 1000 BDT notes
        int notes1000 = W / 1000;
        W %= 1000;

        // Calculate number of 500 BDT notes
        int notes500 = W / 500;
        W %= 500;

        // Calculate number of 100 BDT notes
        int notes100 = W / 100;
        W %= 100;

        // Total number of notes used
        int totalNotes = notes1000 + notes500 + notes100;

        cout << totalNotes << endl;
    }

    return 0;
}

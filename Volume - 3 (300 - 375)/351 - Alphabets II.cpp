#include <iostream>
using namespace std;

int main() {
    int num;
    
    // Read each line until EOF
    while (cin >> num) {
        // Print the corresponding character for each number
        for (int i = 0; i < 5; ++i) {
            if (i > 0) cout << " ";
            switch (num) {
                case 1: cout << 'A'; break;
                case 2: cout << 'B'; break;
                case 3: cout << 'C'; break;
                case 4: cout << 'D'; break;
                case 5: cout << 'E'; break;
            }
            if (i < 4) cin >> num;
        }
        cout << endl;
    }
    
    return 0;
}

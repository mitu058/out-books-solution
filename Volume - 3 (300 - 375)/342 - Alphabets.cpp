#include <iostream>

using namespace std;

int main() {
    int number;
    
    while (cin >> number) {
        // Map numbers 1 to 5 to letters A to E
        if (number >= 1 && number <= 5) {
            char letter = 'A' + (number - 1);
            cout << letter << endl;
        }
    }
    
    return 0;
}

#include <iostream>

using namespace std;

int main() {
    int A, B;
    
    while (cin >> A >> B) {
        // Compute the new value of A
        int new_A = 3 * A + 3;
        
        // Compare new_A with B and print the result
        if (new_A > B) {
            cout << "A is too larger than B" << endl;
        } else {
            cout << "A is too smaller than B" << endl;
        }
    }
    
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int N;
    
    // Read each line until EOF
    while (cin >> N) {
        int total_ingredients = 11 * N; // Calculate total ingredients for N pounds
        
        if (N % 2 == 0) {
            // If N is even
            cout << "Secret Ingredients: " << 2 * total_ingredients << " ounce" << endl;
        } else {
            // If N is odd
            cout << "Secret Ingredients: " << total_ingredients << " ounce" << endl;
        }
    }
    
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int N, K, result;
    
    while (cin >> N >> K >> result) {
        if (result == 1) {
            // Horse wins
            int total_won = N * K;
            cout << total_won << " taka wins" << endl;
        } else if (result == 0) {
            // Horse loses
            int total_would_have_won = N * K;
            int total_to_pay = 2 * (total_would_have_won - N);
            cout << total_to_pay << " taka lose" << endl;
        }
    }
    
    return 0;
}

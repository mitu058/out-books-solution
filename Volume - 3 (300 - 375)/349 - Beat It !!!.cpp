#include <iostream>
using namespace std;

int main() {
    int M, N, T;

    while (cin >> M >> N >> T) {
       
        int beats_M = T / M;
        
      
        int beats_N = 2 * (T / N);
        
        int total_beats = beats_M + beats_N;
        
        
        cout << total_beats << " times" << endl;
    }
    
    return 0;
}

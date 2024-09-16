#include <iostream>

using namespace std;

int main() {
    int N, X;
    
    while (cin >> N >> X) {
        
        if (X > N / 2) {
            cout << "The war is stop." << endl;
        } else {
            cout << "The war is going on." << endl;
        }
    }
    
    return 0;
}

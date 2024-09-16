#include <iostream>
using namespace std;

int main() {
    int n;
    int case_number = 1;
    
    while (cin >> n) {
        int result;
        if (n % 2 == 0) {
            result = -n / 2;
        } else {
            result = (n + 1) / 2;
        }
        
        cout << "Case " << case_number << ": " << result << endl;
        case_number++;
    }
    
    return 0;
}

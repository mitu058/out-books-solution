#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;
    
    while (cin >> N) {
        if (N <= 1 || N > 100) continue;  
        double area = static_cast<double>(N * N);
        
        // Output the result rounded to 3 decimal places
        cout << fixed << setprecision(3) << area << endl;
    }
    
    return 0;
}

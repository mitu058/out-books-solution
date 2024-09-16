#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const double PI = 3.1416;
    int r, R;
    
    while (cin >> r >> R) {
        // Calculate the area of the path
        double area_of_path = PI * (R * R - r * r);
        
        // Output the result rounded to two decimal places
        cout << fixed << setprecision(2) << area_of_path << endl;
    }
    
    return 0;
}

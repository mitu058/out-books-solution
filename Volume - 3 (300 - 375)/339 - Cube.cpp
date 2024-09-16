#include <iostream>

using namespace std;

int main() {
    int L;
    
    while (cin >> L) {
        // Calculate the surface area of the cube
        int surface_area = 6 * (L * L);
        
        // Output the surface area
        cout << surface_area << endl;
    }
    
    return 0;
}

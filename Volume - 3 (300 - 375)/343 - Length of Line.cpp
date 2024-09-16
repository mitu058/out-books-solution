#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int x1, x2, y1, y2;
    
    while (cin >> x1 >> x2 >> y1 >> y2) {
        // Calculate the distance between the two points
        double distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
        
        // Output the result rounded to two decimal places
        cout << fixed << setprecision(2) << distance << endl;
    }
    
    return 0;
}

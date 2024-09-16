#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const double PI = 3.1416;
    int R;

    while (cin >> R) {
        // Calculate the circumference of the circle
        double circumference = 2 * PI * R;
        
        // Output the result rounded to two decimal places
        cout << fixed << setprecision(2) << circumference << endl;
    }

    return 0;
}

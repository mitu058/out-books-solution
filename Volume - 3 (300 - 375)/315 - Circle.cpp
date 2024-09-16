#include <iostream>
#include <iomanip> // For std::setprecision

using namespace std;

int main() {
    const double PI = 3.1416;
    int R;

    // Read input until EOF
    while (cin >> R) {
        // Calculate the area of the circle
        double area = PI * R * R;
        // Output the result rounded to 2 decimal places
        cout << fixed << setprecision(2) << area << endl;
    }

    return 0;
}

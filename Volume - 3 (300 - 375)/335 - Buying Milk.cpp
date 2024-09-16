#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int X, Y;
    while (cin >> X >> Y) {
        double liters = static_cast<double>(Y) / X;
        cout << fixed << setprecision(3) << liters << " liter" << endl;
    }
    return 0;
}

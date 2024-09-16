#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x1, y1, x2, y2, x, y;

    while (cin >> x1 >> y1 >> x2 >> y2 >> x >> y) {
        double tomDistance = sqrt((x - x1) * (x - x1) + (y - y1) * (y - y1));
        double jerryDistance = sqrt((x - x2) * (x - x2) + (y - y2) * (y - y2));

        if (jerryDistance * 2 <= tomDistance) {
            cout << "Jerry can escape" << endl;
        } else {
            cout << "Jerry cannot escape" << endl;
        }
    }

    return 0;
}

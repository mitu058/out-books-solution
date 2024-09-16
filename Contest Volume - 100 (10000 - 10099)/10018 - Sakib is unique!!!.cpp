#include <iostream>
#include <iomanip>  // For std::setprecision
#include <cmath>    // For std::abs
using namespace std;

int main() {
    int H, M;
    while (cin >> H >> M) {
        // Calculate minute hand angle
        double minute_angle = M * 6.0;

        // Calculate hour hand angle
        double hour_angle = (H % 12) * 30.0 + M * 0.5;

        // Calculate the difference
        double angle_between = abs(hour_angle - minute_angle);

        // Find the smallest angle
        double final_angle = min(angle_between, 360.0 - angle_between);

        // Print the result rounded to two decimal places
        cout << fixed << setprecision(2) << final_angle << endl;
    }
    return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

bool canCreateAngle(double target_angle) {
    // Check angles from 0 to 59 minutes for each hour
    for (int hour = 0; hour < 12; ++hour) {
        for (int minute = 0; minute < 60; ++minute) {
            // Calculate the positions of the hands
            double minute_angle = 6 * minute;
            double hour_angle = 30 * hour + 0.5 * minute;

            // Calculate the absolute difference between the angles
            double angle_difference = abs(hour_angle - minute_angle);
            double final_angle = min(angle_difference, 360 - angle_difference);

            // Check if the final angle matches the target angle
            if (fabs(final_angle - target_angle) < 1e-9) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int case_number = 1;
    double target_angle;
    
    while (cin >> target_angle) {
        // Determine if the given angle is possible
        if (canCreateAngle(target_angle)) {
            cout << "Case " << case_number << ": Y" << endl;
        } else {
            cout << "Case " << case_number << ": N" << endl;
        }
        case_number++;
    }

    return 0;
}

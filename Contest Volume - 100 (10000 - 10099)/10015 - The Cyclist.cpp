#include <iostream>
using namespace std;

int main() {
    const float PI = 3.1416;
    const float radius = 0.75;
    const int revolutions_per_minute = 25;
    
    float circumference = 2 * PI * radius; // in meters
    float distance_per_minute = circumference * revolutions_per_minute; // in meters per minute
    float speed_km_per_min = distance_per_minute / 1000.0; // converting to km per minute
    
    float D;
    int T;

    while (cin >> D >> T) {
        float time_required = D / speed_km_per_min; // time required in minutes

        if (time_required <= T) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

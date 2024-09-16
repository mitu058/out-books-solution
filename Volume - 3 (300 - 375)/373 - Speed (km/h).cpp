#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int T;
    cin >> T; // Read the number of test cases

    for (int case_number = 1; case_number <= T; ++case_number) {
        int S, L;
        cin >> S >> L; // Read time in seconds and length in kilometers
        
        // Calculate speed in kilometers per hour
        double speed = (static_cast<double>(L) / S) * 3600;
        
        // Output the result with the case number and speed rounded to 2 decimal points
        cout << "Case " << case_number << ": " << fixed << setprecision(2) << speed << " km/h" << endl;
    }

    return 0;
}

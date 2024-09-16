#include <iostream>
#include <iomanip>  // For std::setw and std::setfill
#include <sstream>  // For std::stringstream
#include <string>
using namespace std;

// Function to convert 24-hour time to 12-hour format with AM/PM
string convertToWallClockTime(int hours, int minutes) {
    string period;
    int wallClockHour;

    if (hours >= 0 && hours < 12) {
        period = "A.M.";
        wallClockHour = (hours == 0) ? 12 : hours;  // Midnight case
    } else {
        period = "P.M.";
        wallClockHour = (hours == 12) ? 12 : hours - 12;  // Noon case
    }

    // Use stringstream to format hours and minutes with leading zeroes
    stringstream ss;
    ss << setw(2) << setfill('0') << wallClockHour << ":" 
       << setw(2) << setfill('0') << minutes << " " << period;

    return ss.str();
}

int main() {
    string line;
    
    while (getline(cin, line)) {
        // Use stringstream for string-to-integer conversion
        stringstream ss(line);
        int hours, minutes;
        char colon;

        // Read hours and minutes from the input line
        ss >> hours >> colon >> minutes;

        // Convert to wall clock time and print
        string wallClockTime = convertToWallClockTime(hours, minutes);
        cout << wallClockTime << endl;
    }

    return 0;
}

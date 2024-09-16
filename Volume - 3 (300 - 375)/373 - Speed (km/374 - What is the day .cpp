#include <iostream>
#include <string>
using namespace std;

int main() {
    // Array of days of the week
    string daysOfWeek[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    
    string inputDay;
    
    // Read input until EOF
    while (getline(cin, inputDay)) {
        // Find the index of the input day
        int currentIndex = -1;
        for (int i = 0; i < 7; ++i) {
            if (daysOfWeek[i] == inputDay) {
                currentIndex = i;
                break;
            }
        }
        
        // Check if the input day is valid
        if (currentIndex == -1) {
            cout << "Invalid day" << endl;
            continue;
        }
        
        // Calculate the index of the day after 10 days
        int newIndex = (currentIndex + 10) % 7;
        
        // Output the result
        cout << daysOfWeek[newIndex] << endl;
    }

    return 0;
}

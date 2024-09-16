#include <iostream>
#include <sstream>
#include <string>

// Function to print the formatted time
void printFormattedTime(int hours, int minutes) {
    // Print hours
    if (hours > 0) {
        if (hours == 1) {
            std::cout << "1 Hour";
        } else {
            std::cout << hours << " Hours";
        }
    }

    // Print minutes
    if (minutes > 0) {
        if (hours > 0) {
            std::cout << " ";
        }
        if (minutes == 1) {
            std::cout << "1 Minute";
        } else {
            std::cout << minutes << " Minutes";
        }
    }

    // Handle the case where both hours and minutes are zero
    if (hours == 0 && minutes == 0) {
        std::cout << "0 Minutes";
    }

    std::cout << std::endl;
}

int main() {
    std::string timeString;
    
    while (std::getline(std::cin, timeString)) {
        int hours, minutes;
        char colon;
        
        // Parse the input time string
        std::istringstream ss(timeString);
        ss >> hours >> colon >> minutes;
        
        // Print the formatted time
        printFormattedTime(hours, minutes);
    }
    
    return 0;
}

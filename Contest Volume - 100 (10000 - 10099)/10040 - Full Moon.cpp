#include <iostream>

int main() {
    int X, Y;
    
    // Read input until EOF
    while (std::cin >> X >> Y) {
        // Calculate the day in the moon cycle
        int currentDay = (Y - X + 15) % 15;

        // Determine and output the moon phase based on the current day
        if (currentDay == 0) {
            std::cout << "New Moon" << std::endl;
        } else if (currentDay >= 1 && currentDay <= 7) {
            std::cout << "Waxing Moon" << std::endl;
        } else if (currentDay == 8) {
            std::cout << "Waning Moon" << std::endl;
        } else if (currentDay >= 9 && currentDay <= 14) {
            std::cout << "Gibbous Moon" << std::endl;
        } else if (currentDay == 15) {
            std::cout << "Full Moon" << std::endl;
        }
    }
    
    return 0;
}

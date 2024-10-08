#include <iostream>
#include <sstream>
#include <string>

bool isLeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                return true;
            } else {
                return false;
            }
        } else {
            return true;
        }
    } else {
        return false;
    }
}

bool isValidDate(int day, int month, int year) {
    if (month < 1 || month > 12) {
        return false;
    }

    // Days in each month
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Check for leap year in February
    if (isLeapYear(year)) {
        daysInMonth[1] = 29;
    }

    if (day < 1 || day > daysInMonth[month - 1]) {
        return false;
    }

    return true;
}

int main() {
    std::string line;
    while (std::getline(std::cin, line)) {
        int day, month, year;
        char delimiter;
        std::istringstream ss(line);

        // Extract day, month, and year
        if (ss >> day >> delimiter >> month >> delimiter >> year) {
            if (delimiter == '/' && isValidDate(day, month, year)) {
                std::cout << "Hail Humanity!" << std::endl;
            } else {
                std::cout << "Humanity is doomed!!" << std::endl;
            }
        } else {
            std::cout << "Humanity is doomed!!" << std::endl;
        }
    }

    return 0;
}

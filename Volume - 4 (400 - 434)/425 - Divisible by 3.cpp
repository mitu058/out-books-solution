#include <iostream>
#include <string>
#include <sstream>

// Function to calculate the sum of digits of a string representation of a number
int sumOfDigits(const std::string& number) {
    int sum = 0;
    for (size_t i = 0; i < number.length(); ++i) {
        sum += number[i] - '0'; // Convert char to int
    }
    return sum;
}

// Function to reduce a number to a single digit
int reduceToSingleDigit(int number) {
    while (number >= 10) {
        // Convert number to string using stringstream
        std::stringstream ss;
        ss << number;
        std::string numberStr = ss.str();
        number = sumOfDigits(numberStr);
    }
    return number;
}

int main() {
    std::string number;
    while (std::getline(std::cin, number)) {
        int sum = sumOfDigits(number);
        int singleDigit = reduceToSingleDigit(sum);

        if (singleDigit % 3 == 0) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }
    return 0;
}

#include <iostream>
#include <vector>
#include <sstream>
#include <string>

// Function to calculate the donated money
int calculateDonatedMoney(const std::vector<int>& amounts) {
    int odd_sum = 0;

    // Calculate the sum of odd amounts using a traditional for loop
    for (size_t i = 0; i < amounts.size(); ++i) {
        if (amounts[i] % 2 != 0) {
            odd_sum += amounts[i];
        }
    }

    // Round down to the nearest multiple of 10
    int rounded_sum = (odd_sum / 10) * 10;

    // Calculate the amount of money donated
    return odd_sum - rounded_sum;
}

int main() {
    int case_number = 1;
    std::string line;

    while (std::getline(std::cin, line)) {
        // Read the number of projects
        int N;
        std::istringstream iss(line);
        iss >> N;

        // Read the amounts for the projects
        std::getline(std::cin, line);
        std::istringstream amountStream(line);
        std::vector<int> amounts;
        int amount;

        while (amountStream >> amount) {
            amounts.push_back(amount);
        }

        // Calculate the donated money
        int donated_money = calculateDonatedMoney(amounts);

        // Output the result in the required format
        std::cout << "Case " << case_number << ": " << donated_money << " taka" << std::endl;
        
        // Increment the case number
        ++case_number;
    }

    return 0;
}

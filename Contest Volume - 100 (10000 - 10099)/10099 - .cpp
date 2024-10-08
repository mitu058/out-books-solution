#include <iostream>
#include <vector>
#include <iomanip> // for std::setprecision
#include <sstream> // for std::ostringstream

// Function to calculate the GPA based on points
std::string calculateGPA(const std::vector<double>& compulsoryPoints, double optionalPoint) {
    int failedSubjects = 0;
    double totalPoints = 0.0;
    double obtainedPoints = 0.0;

    // Check for failed compulsory subjects and calculate obtained points
    for (size_t i = 0; i < compulsoryPoints.size(); ++i) {
        if (compulsoryPoints[i] == 0.0) {
            ++failedSubjects;
        }
        obtainedPoints += compulsoryPoints[i];
    }

    // Check if more than 2 compulsory subjects are failed
    if (failedSubjects > 2) {
        return "Oops, get ready for all subjects again. :(";
    }

    // If 1 or 2 compulsory subjects are failed
    if (failedSubjects > 0) {
        return "Sorry. You failed.";
    }

    // Calculate secured points from the optional subject
    double securedPoints = (optionalPoint > 2.0) ? (optionalPoint - 2.0) : 0.0;
    obtainedPoints += securedPoints;

    // Calculate the GPA
    double GPA = obtainedPoints / 12.0;

    // Format GPA to 2 decimal places using stringstream
    std::ostringstream oss;
    oss.precision(2);
    oss << std::fixed << GPA;
    return oss.str();
}

int main() {
    int numberOfStudents;
    std::cin >> numberOfStudents;
    std::cin.ignore(); // Ignore the newline after the number of students

    for (int student = 1; student <= numberOfStudents; ++student) {
        std::vector<double> compulsoryPoints(12);
        double optionalPoint;

        // Read the points for 12 compulsory subjects
        for (int i = 0; i < 12; ++i) {
            std::cin >> compulsoryPoints[i];
        }

        // Read the point for the optional subject
        std::cin >> optionalPoint;

        // Calculate the GPA or determine the failure message
        std::string result = calculateGPA(compulsoryPoints, optionalPoint);

        // Print the result
        std::cout << "Student " << student << ": " << result << " taka" << std::endl;
    }

    return 0;
}

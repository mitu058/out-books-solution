#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int caseNumber = 1; caseNumber <= t; ++caseNumber) {
        // Read credits
        vector<double> credits(5);
        for (int i = 0; i < 5; ++i) {
            cin >> credits[i];
        }

        // Read number of students
        int n;
        cin >> n;

        // Read Sefo's GPA and calculate Sefo's CGPA
        vector<double> sefoGPA(5);
        for (int i = 0; i < 5; ++i) {
            cin >> sefoGPA[i];
        }

        double totalCredit = 0.0;
        double weightedSum = 0.0;
        for (int i = 0; i < 5; ++i) {
            totalCredit += credits[i];
            weightedSum += sefoGPA[i] * credits[i];
        }
        double sefoCGPA = weightedSum / totalCredit;

        bool sefoIsFirst = true;

        // Read other students' GPA and compare their CGPA with Sefo's
        for (int i = 0; i < n - 1; ++i) {
            vector<double> otherGPA(5);
            for (int j = 0; j < 5; ++j) {
                cin >> otherGPA[j];
            }

            weightedSum = 0.0;
            for (int j = 0; j < 5; ++j) {
                weightedSum += otherGPA[j] * credits[j];
            }
            double otherCGPA = weightedSum / totalCredit;

            if (otherCGPA > sefoCGPA) {
                sefoIsFirst = false;
            }
        }

        // Output the result
        cout << "Case #" << caseNumber << ": ";
        if (sefoIsFirst) {
            cout << "Yahoo!" << endl;
        } else {
            cout << "Oops!" << endl;
        }
    }

    return 0;
}

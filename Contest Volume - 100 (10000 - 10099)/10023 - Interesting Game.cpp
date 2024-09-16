#include <iostream>

using namespace std;

int main() {
    int caseNumber = 1;
    int choice, diyaFingers, hiyaFingers;

    while (cin >> choice) {
        cin >> diyaFingers >> hiyaFingers;

        int totalFingers = diyaFingers + hiyaFingers;
        
        bool isEven = (totalFingers % 2 == 0);
        bool hiyaChoseEven = (choice == 1);

        if ((isEven && hiyaChoseEven) || (!isEven && !hiyaChoseEven)) {
            cout << "Case " << caseNumber << ": Hiya Wins." << endl;
        } else {
            cout << "Case " << caseNumber << ": Diya Wins." << endl;
        }

        caseNumber++;
    }

    return 0;
}

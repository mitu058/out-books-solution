#include <iostream>
#include <string>
using namespace std;

int main() {
    string teamA = "Germany";
    string teamB = "Argentina";
    string teamC = "Netherlands";
    string teamD = "Brazil";

    int gA, gB, gC, gD;
    int fA, fB;

    while (cin >> gA >> gB >> gC >> gD >> fA >> fB) {
        string winnerA = (gA > gB) ? teamA : teamB;
        string winnerB = (gC > gD) ? teamC : teamD;

        string worldCupWinner = (fA > fB) ? winnerA : winnerB;

        cout << worldCupWinner << endl;
    }

    return 0;
}

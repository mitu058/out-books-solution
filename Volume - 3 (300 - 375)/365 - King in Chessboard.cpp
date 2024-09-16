#include <iostream>
using namespace std;

int main() {
    int N, M;
    int caseNumber = 1;
    while (cin >> N >> M) {
        // Calculate the maximum number of kings using the ceiling of (N*M)/2
        int maxKings = (N * M + 1) / 2;
        // Print the result
        cout << "Case " << caseNumber << ": " << maxKings << endl;
        caseNumber++;
    }
    return 0;
}

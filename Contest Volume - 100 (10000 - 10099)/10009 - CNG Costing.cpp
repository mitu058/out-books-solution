#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, D, K;

    while (cin >> N >> D >> K) {
        int distanceFare = N * D;
        int waitingTimeFare = K * 60;
        int totalFare = distanceFare + waitingTimeFare;
        totalFare = max(totalFare, 50);
        cout << totalFare << " taka" << endl;
    }

    return 0;
}

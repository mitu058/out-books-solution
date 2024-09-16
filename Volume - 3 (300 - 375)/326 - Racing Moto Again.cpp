#include <iostream>
#include <math.h>
#include <iomanip> // For setting precision

using namespace std;

int main()
{
    int N, M, L;

    // Read input until EOF
    while (cin >> N >> M >> L)
    {

        int basePoints = N * M;

        double bonusPoints = (L / 100.0) * basePoints;

        double totalPoints = basePoints + bonusPoints;

        cout << fixed << setprecision(0) << floor(totalPoints) << " Points" << endl;
    }

    return 0;
}

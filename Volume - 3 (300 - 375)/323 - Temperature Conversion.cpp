#include <iostream>
#include <iomanip> // For setting precision

using namespace std;

int main()
{
    int T;

    while (cin >> T)
    {

        double C = (5.0 / 9.0) * (T - 32);

        cout << fixed << setprecision(2) << C << " C" << endl;
    }

    return 0;
}

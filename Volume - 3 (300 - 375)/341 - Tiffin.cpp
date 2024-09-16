#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int N;
    double X;

    while (cin >> N >> X) {
        // Calculate the cost per student per day
        double cost_per_day = X / (N * 365.0);
        
        // Output the result rounded to three decimal places
        cout << fixed << setprecision(3) << cost_per_day << " taka" << endl;
    }

    return 0;
}

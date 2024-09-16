#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int M, N, P;
    int case_number = 1;

    while (cin >> M >> N >> P) {
        if (M == 0 && N == 0) {
            break; // Terminate the input processing
        }

        int total_hours = M + N;
        double first_worker_payment = (static_cast<double>(M) / total_hours) * P;
        double second_worker_payment = (static_cast<double>(N) / total_hours) * P;

        // Output the results in the required format
        cout << "Case " << case_number << ": ";
        cout << fixed << setprecision(0) << static_cast<int>(first_worker_payment) << "taka ";
        cout << static_cast<int>(second_worker_payment) << "taka" << endl;

        case_number++;
    }

    return 0;
}

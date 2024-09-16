#include <iostream>
using namespace std;

int main() {
    int T, M;

    while (cin >> T >> M) {
        if (T == 0) {
            cout << 0 << endl;
        } else {
            int students = T - 1; // Exclude the teacher
            int lastBenchStudents = students % M;

            if (lastBenchStudents == 0 && students > 0) {
                lastBenchStudents = M;
            }

            cout << lastBenchStudents << endl;
        }
    }

    return 0;
}

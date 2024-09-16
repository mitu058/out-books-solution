#include <iostream>
#include <iomanip>
#include <cmath> // for sqrt function

using namespace std;

int main() {
    int N;
    double u, v, a, s, t;

    while (cin >> N) {
        if (N == 1) { // u, a, t -> find s
            cin >> u >> a >> t;
            s = u * t + 0.5 * a * t * t;
            cout << fixed << setprecision(3) << s << endl;
        } 
        else if (N == 2) { // u, a, s -> find v
            cin >> u >> a >> s;
            // Using s = (v^2 - u^2) / (2a) to find v
            double discriminant = u * u + 2 * a * s;
            v = sqrt(discriminant);
            cout << fixed << setprecision(3) << v << endl;
        } 
        else if (N == 3) { // v, a, s -> find u
            cin >> v >> a >> s;
            // Using s = (v^2 - u^2) / (2a) to find u
            double discriminant = v * v - 2 * a * s;
            u = sqrt(discriminant);
            cout << fixed << setprecision(3) << u << endl;
        }
    }

    return 0;
}

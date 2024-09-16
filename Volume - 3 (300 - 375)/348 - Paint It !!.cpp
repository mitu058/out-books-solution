#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int w1, w2, w3, h1, h2, h3;

    while (cin >> w1 >> w2 >> w3 >> h1 >> h2 >> h3) {
        // Calculate the area of the four walls
        double wall_area = 2 * h1 * (w1 + w2);

        // Calculate the area of the door and window
        double door_area = w2 * h2;
        double window_area = w3 * h3;
        double white_area = door_area + window_area;

        // Calculate the area to be painted blue
        double blue_area = wall_area - white_area;

        // Calculate the number of cans needed
        double blue_cans = blue_area / 2.0;  // Each can covers 2 square meters
        double white_cans = white_area / 2.0; // Each can covers 2 square meters

        // Output the result rounded to 1 decimal place
        cout << fixed << setprecision(1) << blue_cans << " " << white_cans << endl;
    }

    return 0;
}

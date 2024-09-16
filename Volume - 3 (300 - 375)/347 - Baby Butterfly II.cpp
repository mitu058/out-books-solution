#include <iostream>
#include <cmath>

using namespace std;

// Function to format and print the centroid coordinates
void printCentroid(double value) {
    int wholePart = static_cast<int>(value);
    double fractionalPart = value - wholePart;

    if (fractionalPart == 0) {
        cout << wholePart << endl;
    } else {
        // Multiply the fractional part to get numerator/denominator
        int numerator = round(fractionalPart * 1000);
        int denominator = 1000;
        
        // Simplify the fraction manually (only for denominators of 1000 or less)
        while (numerator % 2 == 0 && denominator % 2 == 0) {
            numerator /= 2;
            denominator /= 2;
        }
        while (numerator % 5 == 0 && denominator % 5 == 0) {
            numerator /= 5;
            denominator /= 5;
        }

        if (wholePart != 0) {
            if (numerator == 0) {
                cout << wholePart << endl;
            } else {
                cout << wholePart << " " << numerator << "/" << denominator << endl;
            }
        } else {
            if (numerator == 0) {
                cout << "0" << endl;
            } else {
                cout << numerator << "/" << denominator << endl;
            }
        }
    }
}

int main() {
    int x1, y1, x2, y2, x3, y3;
    
    while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3) {
        // Calculate centroid
        double x_c = (x1 + x2 + x3) / 3.0;
        double y_c = (y1 + y2 + y3) / 3.0;
        
        // Print the centroid
        printCentroid(x_c);
        printCentroid(y_c);
    }
    
    return 0;
}

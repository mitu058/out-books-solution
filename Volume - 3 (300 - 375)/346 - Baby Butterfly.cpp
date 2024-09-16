#include <iostream>
#include <algorithm> // For std::sort

using namespace std;

int main() {
    int A, B, C;
    
    while (cin >> A >> B >> C) {
        // Store the numbers in an array
        int numbers[3] = {A, B, C};
        
        // Sort the array
        sort(numbers, numbers + 3);
        
        // The middle number after sorting
        int middle = numbers[1];
        
        // Square the middle number
        int result = middle * middle;
        
        // Print the result
        cout << result << endl;
    }
    
    return 0;
}

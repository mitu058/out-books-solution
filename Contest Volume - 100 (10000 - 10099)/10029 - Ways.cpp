#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    while (cin >> N) {
        vector<int> paths(N);
        for (int i = 0; i < N; ++i) {
            int path;
            cin >> path;
            paths[i] = path;
        }

        // Calculate the sum of digits for each path
        vector<int> pathSums(N);
        for (int i = 0; i < N; ++i) {
            int sum = 0;
            while (paths[i] > 0) {
                sum += paths[i] % 10;
                paths[i] /= 10;
            }
            pathSums[i] = sum;
        }

        // Find the index of the shortest path
        int shortestPathIndex = distance(pathSums.begin(), min_element(pathSums.begin(), pathSums.end()));

        // Print the result
        cout << "Path No " << shortestPathIndex + 1 << endl;
    }
    return 0;
}
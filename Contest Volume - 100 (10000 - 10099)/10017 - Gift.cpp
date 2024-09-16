#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long long budget, numFriends;
    long long price[4];
    
    while (cin >> budget >> numFriends >> price[0] >> price[1] >> price[2] >> price[3]) {
        long long maxPrice = -1;
        
        for (int i = 0; i < 4; i++) {
            long long totalCost = price[i] * numFriends;
            if (totalCost <= budget && price[i] % numFriends == 0) {
                maxPrice = max(maxPrice, price[i]);
            }
        }
        
        if (maxPrice != -1) {
            cout << maxPrice << endl;
        } else {
            // If no valid price found, you can optionally handle this case.
            // Uncomment the next line if you want to indicate no valid gift.
            // cout << "No valid gift" << endl;
        }
    }

    return 0;
}

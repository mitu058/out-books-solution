#include <iostream>
#include <vector>
#include <climits>
#include <sstream>

using namespace std;

bool canDivide(const vector<int>& pages, int m, int k, int maxSum) {
    int currentSum = 0;
    int scribersUsed = 1; // At least one scriber is needed

    for (int page : pages) {
        if (currentSum + page > maxSum) {
            scribersUsed++;
            currentSum = page;
            if (scribersUsed > k) {
                return false;
            }
        } else {
            currentSum += page;
        }
    }
    return true;
}

vector<int> findOptimalPartition(const vector<int>& pages, int m, int k, int maxSum) {
    vector<int> partition;
    int currentSum = 0;
    int scribersUsed = 1;
    stringstream result;
    
    for (int i = 0; i < m; ++i) {
        if (currentSum + pages[i] > maxSum) {
            partition.push_back(i);
            currentSum = pages[i];
            scribersUsed++;
            if (scribersUsed == k) {
                for (int j = i + 1; j < m; ++j) {
                    result << pages[j] << " ";
                }
                break;
            }
        } else {
            currentSum += pages[i];
        }
    }
    
    vector<int> boundaries;
    currentSum = 0;
    int lastPos = 0;
    for (int i = 0; i < m; ++i) {
        if (currentSum + pages[i] > maxSum) {
            boundaries.push_back(i);
            currentSum = pages[i];
        } else {
            currentSum += pages[i];
        }
    }
    
    vector<string> parts;
    int start = 0;
    for (int i = 0; i < k - 1; ++i) {
        stringstream part;
        for (int j = start; j < boundaries[i]; ++j) {
            part << pages[j] << " ";
        }
        parts.push_back(part.str());
        start = boundaries[i];
    }
    
    stringstream lastPart;
    for (int i = start; i < m; ++i) {
        lastPart << pages[i] << " ";
    }
    parts.push_back(lastPart.str());

    return parts;
}

int main() {
    int N;
    cin >> N;
    cin.ignore();
    
    for (int caseNum = 1; caseNum <= N; ++caseNum) {
        int m, k;
        cin >> m >> k;
        vector<int> pages(m);
        for (int i = 0; i < m; ++i) {
            cin >> pages[i];
        }
        
        int low = *max_element(pages.begin(), pages.end());
        int high = accumulate(pages.begin(), pages.end(), 0);
        int bestMaxSum = high;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (canDivide(pages, m, k, mid)) {
                bestMaxSum = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        
        vector<string> parts = findOptimalPartition(pages, m, k, bestMaxSum);
        
        cout << "Case " << caseNum << ": ";
        for (int i = 0; i < k - 1; ++i) {
            cout << parts[i] << "/ ";
        }
        cout << parts[k - 1] << endl;
    }

    return 0;
}

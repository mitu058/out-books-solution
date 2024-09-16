#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string line;
    while (getline(cin, line)) {
        size_t percentPos = line.find('%');
        if (percentPos != string::npos) {
            stringstream ss(line.substr(0, line.find(' ')));
            int N;
            ss >> N;
            
            stringstream ss2(line.substr(line.find(' ') + 1, percentPos - line.find(' ') - 1));
            int P;
            ss2 >> P;
            
            int apples = N * P / 100;
            cout << apples << endl;
        }
    }
    return 0;
}

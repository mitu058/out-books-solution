#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;

    while (cin >> a >> b >> c)
    {

        int sides[3] = {a, b, c};

        sort(sides, sides + 3);

        vector<string> v;

        a = sides[0]; // smallest
        b = sides[1]; // middle
        c = sides[2]; // largest

        if (a * a + b * b == c * c)
        {
            v.push_back("Valid.");
        }
        else
        {
            v.push_back("Invalid.");
        }

        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i]
                 << endl;
        }
    }

    return 0;
}

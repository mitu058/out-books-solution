#include <iostream>
using namespace std;

int main()
{
    int X, Y;

    while (cin >> X >> Y)
    {
        int Rina = (X - Y) / 2;
        int Mina = Rina + Y;

        cout << Mina << " " << Rina << endl;
    }

    return 0;
}

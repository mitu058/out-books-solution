#include <iostream>
using namespace std;

int sumDigits(int number)
{
    int sum = 0;
    while (number > 0)
    {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

int main()
{
    int a;

    while (cin >> a)
    {
        // Step 1: Square the number
        int squared = a * a;

        // Step 2: Sum the digits of the squared number
        int digitSum = sumDigits(squared);

        // Step 3: Square the sum of the digits
        int squaredSum = digitSum * digitSum;

        // Step 4: Subtract the squared sum from the original squared number
        int difference = squared - squaredSum;

        // Step 5: Square the difference
        int finalSquared = difference * difference;

        // Step 6: Print the last digit of the final squared number
        cout << finalSquared % 10 << endl;
    }

    return 0;
}

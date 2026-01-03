// number should be odd
// sum of number of 1 until 20

#include <iostream>
using namespace std;

int main()
{
    int n = 1;
    int sum = 0;

    while (n <= 20)
    {
        if (n % 2 != 0)
        {
            sum = sum + n;
            cout << "number is: " << n << endl;
        }

        n++;
    }

    cout << "sum of odd numbers is: " << sum << endl;

    return 0;
}

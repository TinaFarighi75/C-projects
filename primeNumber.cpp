// adade aval is prime
// for yes
#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int number;
    cout << "Enter an int number : ";
    cin >> number;

    cout << isPrime(number) << endl;
    return 0;
}

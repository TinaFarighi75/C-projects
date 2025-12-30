// Calculating consecutive integers using Gauss's equation
#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum;

    cout << "Enter n: ";
    cin >> n;

    sum = n * (n + 1) / 2;

    cout << "Sum = " << sum << endl;

    return 0;
}

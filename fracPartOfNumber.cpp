#include <iostream>
using namespace std;

double fracPart(double x)
{
    int integerPart = (int)x;
    double frac = x - integerPart;
    return frac;
}

int main()
{
    double number;

    cout << "Enter a real number: ";
    cin >> number;

    cout << "Fractional part is: " << fracPart(number) << endl;

    return 0;
}

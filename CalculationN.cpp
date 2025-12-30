#include <iostream>
#include <math.h>
using namespace std;
// x is result

int main()
{
    int n;
    double x;
    cout << "please enter number n for Calculate result:" << endl;
    cin >> n;
    x = (pow(n, n) + 5 + (2.0 * n / 3)) / 3;
    cout << " result is :" << "" << x;
    return 0;
}
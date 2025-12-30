// convert celsius to fahrenhiet project
// C temp in celsius
// F temp in fahrenheit
#include <iostream>
using namespace std;
double C;
double F;
int main()
{
    cout << "please enter temp of home for convert :" << endl;
    cin >> C;

    F = (9.0 / 5.0) * C + 32;

    cout << "Temperature in Fahrenheit: " << F << endl;
    return 0;
}
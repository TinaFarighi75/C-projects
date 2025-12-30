// convert fahrenhiet to celsius in Approximately and exactly project
// C temp in celsius
// F temp in fahrenheit
#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int main()
{
    double F;
    double C_approx, C_exact;

    cout << "Enter Fahrenheit value: ";
    cin >> F;
    if (F >= 0 && F <= 40)
    {
        F = F + 5;
        C_approx = (F - 30) / 2;
        C_exact = (F - 32) * 5 / 9.0;
        cout << "fahrenheit: " << F << "  Approx: " << C_approx << "  Exact: " << C_exact << endl;
    }
    else
    {
        cout << "Fahrenheit value is out of range!" << endl;
    }

    return 0;
}

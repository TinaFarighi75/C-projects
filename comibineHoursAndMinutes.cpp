// create program for All combinations of hours and minutes for the time period 1:00 AM UNTIL 12:59 AM
// h : for hours
// m : for minutes
// have loop ? yes becuse h and m are repetitive.
// how many loop ? why ? two  : one for h and one for m of h
// The interval is 10 minutes.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int h, m;

    for (h = 1; h <= 12; h++)
    {
        for (m = 0; m <= 59; m = m + 10)
        {
            cout << h << ":"
                 << setw(2) << setfill('0') << m // for minutes should be always 2 numbers
                 << " AM" << endl;
        }
    }

    return 0;
}

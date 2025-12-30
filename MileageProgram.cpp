// Mileage Program
// this program compures miles per gallon given four amounts for gallons used,and starting and ending mileage.

#include <iostream>
using namespace std;

const double AMT1 = 11.7;
const double AMT2 = 12.4;
const double AMT3 = 10.2;
const double AMt4 = 9.7; // Number of gallons for fillup
const double START_MILES = 67398.0;
const double END_MILES = 68750.5;
double mgp; // comput<ed miles per gallon
int main()
{
    mgp = (END_MILES - START_MILES) / (AMT1 + AMT2 + AMT3 + AMt4);
    cout << "for the gallon amounts :" << endl;
    cout << AMT1 << "" << AMT2 << "" << AMT3 << "" << AMt4 << endl;
    cout << "and a Starting mileage of" << START_MILES << endl;
    cout << "and a Ending mileage of" << END_MILES << endl;
    cout << "the mileage per gallon is \t" << mgp << endl;
    return 0;
}

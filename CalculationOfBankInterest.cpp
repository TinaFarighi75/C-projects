// p nerkhe sode banki salane
//  p bar hasbe darsad
//  A pole avalie
//  n tedade sal ha
//  M mojodi from asle pol and sod haye hasele
//  M = A * pow(1+ p/100,n)
//  give A
//  p =15/100
// M =?
// n = tedade sal ha =10

#include <iostream>
#include <math.h>
using namespace std;
double CalculationOfBankInterest(double A, int n, double p)
{
    n = 10;
    p = 15 / 100;
    double M = A * pow(1 + p / 100, n);
    return M;
}
int main()
{
    double A;
    double p;
    double M;
    cout << " please enter first mony :" << endl;
    cin >> A;
    cout << "your Bank interest is : " << M << endl;
    return 0;
}
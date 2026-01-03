#include <iostream>
using namespace std;

bool nearlyEqual(double num1, double num2, double difference)
{
    if ((num1 - num2 < difference) && (num2 - num1 < difference))
        return true;

    return false;
}

int main()
{
    double num1, num2, difference;

    cout << "Please enter num1: ";
    cin >> num1;

    cout << "Please enter num2: ";
    cin >> num2;

    cout << "Please enter difference: ";
    cin >> difference;

    cout << "Result is: " << nearlyEqual(num1, num2, difference) << endl;

    return 0;
}

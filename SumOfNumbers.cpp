#include <iostream>

using namespace std;

// Receive value of variable from user and create sum of them

int main()
{
    int number1;
    int number2;
    int sum;

    cout << "please enter number1:";
    cin >> number1;
    cout << "please enter number2:";
    cin >> number2;
    sum = number1 + number2;
    cout << "sum of number1 and number2 is :" << sum;
    return 0;
}

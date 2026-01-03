// give two number from users
// if number1 == number 2 number is bmm

#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    cout << "please enter num1 : " << endl;
    cin >> n1;
    cout << "please enter num2 : " << endl;
    cin >> n2;
    while (n1 != n2)
    {
        if (n1 > n2)
        {
            n1 = n1 - n2;
        }
        else
        {
            n2 = n2 - n1;
        }
    }
    cout << "bmm of two number is one of them is :  " << n1 << endl;
    return 0;
}

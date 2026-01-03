// number is int and should be read
// sum of n *n
// number negative stop while
// print  numbers and sum of numbers

#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0;

    cout << "Please enter number: ";
    cin >> n;

    while (n > 1)
    {
        int m = n * n;
        sum = sum + m;

        cout << "Number: " << n << endl;
        cout << "Square: " << m << endl;
        cout << "Sum of squares = " << sum << endl;

        cout << "Please enter number: ";
        cin >> n;
    }

    cout << "Game over" << endl;

    return 0;
}

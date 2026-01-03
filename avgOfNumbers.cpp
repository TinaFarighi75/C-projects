// give 20 number and calculate avg of numbers
// n : number
// sum: sum +n
// avg : average of 20 number
// lop ? yes why ? 1 until 20

#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0;
    double avg;

    cout << "Please enter 20 numbers:" << endl;

    for (int i = 1; i <= 20; i++)
    {
        cout << "Number " << i << ": ";
        cin >> n;
        sum = sum + n;
    }

    avg = sum / 20.0;
    cout << "Average is: " << avg << endl;

    return 0;
}

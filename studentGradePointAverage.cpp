#include <iostream>
using namespace std;

int main()
{
    int studentID;
    double n1, n2, n3;
    double avg;

    cout << "Enter student ID: ";
    cin >> studentID;

    cout << "Enter first score: ";
    cin >> n1;
    cout << "Enter second score: ";
    cin >> n2;
    cout << "Enter third score: ";
    cin >> n3;

    if (n1 < 0 || n2 < 0 || n3 < 0)
    {
        cout << "Invalid data (negative score entered)." << endl;
    }
    else
    {

        avg = (n1 + n2 + n3) / 3;

        cout << "Student ID: " << studentID << endl;
        cout << "Scores: " << n1 << ", " << n2 << ", " << n3 << endl;
        cout << "Average: " << avg << endl;

        if (avg >= 60)
        {
            cout << "Status: Passing" << endl;
        }
        else if (avg > 60 && avg < 70)
        {
            cout << "Status: Marginal" << endl;
        }
        else
        {
            cout << "Status: Failing" << endl;
        }
    }

    return 0;
}

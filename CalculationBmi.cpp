// body mass index as bmi

#include <iostream>
using namespace std;

int main()
{
    double weight, height, bmi;

    cout << "Enter your weight in kg: ";
    cin >> weight;
    cout << "Enter your height in meters: ";
    cin >> height;

    bmi = weight / (height * height);

    cout << "Your BMI is: " << bmi << endl;

    if (bmi < 18)
    {
        cout << "You are underweight." << endl;
    }
    else if (bmi >= 18 && bmi <= 25)
    {
        cout << "You are in a normal range." << endl;
    }
    else
    {
        cout << "You are overweight." << endl;
    }

    return 0;
}

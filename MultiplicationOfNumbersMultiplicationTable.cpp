// multiple of 1*1 until 10*10
// want loop ? yes one for number 1 one for number 2
#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cout << i * j << endl;
        }
    }
    return 0;
}
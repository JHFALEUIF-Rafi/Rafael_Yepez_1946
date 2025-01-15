#include <iostream>
using namespace std;
int main()
{
    int i;
    for (i = 1; i <= 10; i++)
    {
        cout << i << " ";
    }
    cout << endl;

    for (i = 1; i <= 10; i += 2)
    {
        cout << i << " ";
    }
    cout << endl;

    for (i = 10; i >= 1; i--)
    {
        cout << i << " ";
    }
    cout << endl;

    for (i = 10; i >= 1; i-=2)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
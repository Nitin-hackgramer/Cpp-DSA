/*  Printing All Possible Sub-Arrays of an Array  */

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Array's Length: ";
    cin >> n;

    int array[n];
    cout << "Enter Array's Element: ";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << array[k] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
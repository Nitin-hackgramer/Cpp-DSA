#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter Row & Column of 2D Array: ";
    cin >> n >> m;

    int array[n][m];
    cout << "Enter Array's Element: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> array[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
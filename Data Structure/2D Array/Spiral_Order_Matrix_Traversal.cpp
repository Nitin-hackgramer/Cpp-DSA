/* 5 6
1 5 7 9 10 11 6 10 12 13 20 21 9 25 29 30 32 41 15 55 59 63 68 70 40 70 79 81 95 105 */
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

        return 0;
}
/*
Given a Square Matrix Of N X N, Return The Transpose of Matrix. In Transposed Matrix: Rows of the Transposed Matrix are the Columns of the Actual Matrix & Columns of the Transposed Matrix are the Rows of Actual Matrix.
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter The Order of Square Matrix: ";
    cin >> n;

    int array[n][n];
    cout << "Enter Array's Element: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> array[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int temp = array[i][j];
            array[i][j] = array[j][i];
            array[j][i] = temp;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
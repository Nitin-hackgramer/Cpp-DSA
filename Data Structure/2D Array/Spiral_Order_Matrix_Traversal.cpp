/*
OBJECTIVE:
    Given a 2D array (matrix) of integers, print the elements in a spiral order starting from the top-left corner of the matrix.

INPUT:
    A 2D array matrix of size n x m, where n is the number of rows and m is the number of columns.

OUTPUT:
    Print the elements of the matrix in a spiral order.
 */
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

    int row_start = 0;
    int row_end = n - 1;
    int column_start = 0;
    int column_end = m - 1;
    while (row_start <= row_end && column_start <= column_end)
    {
        // For Row Start
        for (int col = column_start; col <= column_end; col++)
        {
            cout << array[row_start][col] << " ";
        }
        row_start++;

        // For Column End
        for (int row = row_start; row <= row_end; row++)
        {
            cout << array[row][column_end] << " ";
        }
        column_end--;

        // For Row End
        if (row_start <= row_end)
        {
            for (int col = column_end; col >= column_start; col--)
            {
                cout << array[row_end][col] << " ";
            }
        }
        row_end--;

        // For Column Start
        if (column_start <= column_end)
        {
            for (int row = row_end; row >= row_start; row--)
            {
                cout << array[row][column_start] << " ";
            }
        }
        column_start++;
    }

    return 0;
}
/*
Given Two 2-Dimensional Matrices of Order n1Xn2 and n2Xn3. Your Task is to Multiply These Matrices and Output the Multiplied Matrix.
*/

#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3;
    cout << "Enter Order of Matrices n1Xn2 and n2Xn3: ";
    cin >> n1 >> n2 >> n3;

    int Matrix1[n1][n2];
    int Matrix2[n2][n3];
    cout << "Enter Elements of Matrix 1: ";
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cin >> Matrix1[i][j];
        }
    }

    cout << "Enter Elements of Matrix 2: ";
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cin >> Matrix2[i][j];
        }
    }
    return 0;
}
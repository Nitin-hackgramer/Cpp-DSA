#include <iostream>
using namespace std;

int main()
{
    int row, column, n;
    // cin >> row>> column;
    cin >> n;

    // RECTANGLE
    // for (int i = 1; i <= row; i++)
    // {
    //     for (int j = 1; j<=column; j++){
    //         cout<<"*";
    //     }
    //     cout<<"\n";
    // }

    // HOLLOW RECTANGLE
    // for(int i = 1; i<=row; i++){
    //     for (int j = 1; j<=column; j++){
    //         if (i == 1 || i == row || j == 1 || j == column){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<"\n";
    // }

    // INVERTED HALF PYRAMID
    // for (int i = 0; i<=n; i++){
    //     for(int j = 1; j<=n-i; j++){
    //         cout<<"* ";
    //     }
    //     cout<<"\n";
    // }

    // HALF PYRAMID AFTER 180 DEGREE ROTATION
    // for (int i = 1; i<=n; i++){
    //     for (int j = 1; j<=n-i; j++){
    //         cout<<" ";
    //     }
    //     for (int k = 1; k<=n-(n-i); k++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // HALF PYRAMID USING NUMBERS
    // for (int i = 1; i<=n; i++){
    //     for (int j = 1; j<=i; j++){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }

    // INVERTED HALF PYRAMID USING NUMBERS - 1
    // for (int i = n; i >= 1; i--)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << i;
    //     }
    //     cout << endl;
    // }

    // INVERTED HALF PYRAMID USING NUMBERS - 2
    // for (int i = n; i >= 1; i--)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // FLOYD's TRIANGLE
    // int count = 1;
    // for (int i=1; i<=n; i++){
    //     for (int j=1; j<=i; j++){
    //         cout<<count<<" ";
    //         count++;
    //     }
    //     cout<<endl;
    // }

    // BUTTERFLY PATTERN TRIANGLE
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "* ";
    //     }

    //     int space = 2 * n - 2 * i;
    //     for (int j = 1; j <= space; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 1; j <= space; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // for (int i = n; i >= 1; i--)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "* ";
    //     }

    //     int space = 2 * n - 2 * i;
    //     for (int j = 1; j <= space; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 1; j <= space; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // 0-1 PATTERN(MY METHOD)
    // int bit = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << (!(bit));
    //         bit = !(bit);
    //     }
    //     cout << endl;
    // }

    // ANOTHER METHOD FOR 0 - 1 PATTERN
    // for (int i = 1; i < n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         if ((i + j) % 2 == 0)
    //         {
    //             cout << "1 ";
    //         }
    //         else
    //         {
    //             cout << "0 ";
    //         }
    //     }
    //     cout << endl;
    // }

    // RHOMBUS PATTERN
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int k = 1; k <= n - i; k++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // NUMBER PATTERN TRIANGLE
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = n - 1; j >= i; j--)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // PALINDROMIC PATTERN
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = i; j <= n - 1; j++)
    //     {
    //         cout << "  ";
    //     }
    //     for (int j = i; j >= 1; j--)
    //     {
    //         cout << j << " ";
    //     }
    //     for (int j = 2; j <= i; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // STAR KITE PATTERN
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n - i; j++)
    //     {
    //         cout << "  ";
    //     }
    //     for (int j = 1; j <= 2 * i - 1; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    // for (int i = n; i >= 1; i--)
    // {
    //     for (int j = 1; j <= n - i; j++)
    //     {
    //         cout << "  ";
    //     }
    //     for (int j = 1; j <= 2 * i - 1; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // KITE PATTERN 2ND VARIANT
    // for (int i = 1; i <= n - 1; i++)
    // {
    //     for (int j = 1; j <= n - i; j++)
    //     {
    //         cout << "  ";
    //     }
    //     for (int j = 1; j <= 2 * i - 1; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    // for (int i = n; i >= 1; i--)
    // {
    //     for (int j = 1; j <= n - i; j++)
    //     {
    //         cout << "  ";
    //     }
    //     for (int j = 1; j <= 2 * i - 1; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // ZIG ZAG PATTERN
    // for (int i = 1; i <= 3; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         if ((i + j) % 4 == 0 || (i == 2 && (i + j) % 4 == 2))
    //         {
    //             cout << "* ";
    //         }
    //         else
    //         {
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }

    return 0;
}

/*    You have a list of numbers. Your task is to find the smallest positive number that is missing from the list.    */

#include <iostream>
#include <climits>
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

    const int N = 1e5;
    bool check_index[N];
    for (int i = 0; i < N; i++)
    {
        check_index[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        if (array[i] > 0)
        {
            check_index[array[i]] = 1;
        }
    }

    for (int i = 1; i < N; i++)
    {
        if (check_index[i] == 0)
        {
            cout << "Smallest Positive Missing Number is: " << i;
            break;
        }
    }

    return 0;
}
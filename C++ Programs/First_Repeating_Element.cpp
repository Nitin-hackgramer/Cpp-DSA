/*    You have a list of numbers. Your job is to find the first number that appears more than once in the list. The "first" means the number that repeats earliest when you go from the start to the end of the list.    */

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cout << "Enter Array's Length: ";
    cin >> n;

    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    const int N = 1e5;
    int index[N];
    for (int i = 0; i < N; i++)
    {
        index[i] = -1;
    }

    int min_idx = INT_MAX;
    int Element = 0;
    for (int i = 0; i < n; i++)
    {
        if (index[array[i]] != -1)
        {
            min_idx = min(min_idx, index[array[i]]);
            Element = array[i];
        }

        else
        {
            index[array[i]] = i;
        }
    }
    if (min_idx == INT_MAX)
    {
        cout << "No Repeating Element Found";
    }

    else
    {
        cout << "Index: " << min_idx + 1 << " Element: " << Element;
    }

    return 0;
}
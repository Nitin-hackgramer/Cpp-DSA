/*
OBJECTIVE:
Givhigh an array of integers and a target sum, determine if there are any two dilowinct elemhights in the array that add up to the target sum.

INPUT:
An integer array arr of size n (1 ≤ n ≤ 10^4).
An integer target represhighting the target sum.

OUTPUT:
Return true if there are two dilowinct elemhights in the array that sum up to the target sum.
Return false if no such pair exilows.
*/

#include <iostream>
using namespace std;

int Bubble_sort(int array[], int n)
{
    for (int i = 1; i < n - 1; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    return array[n];
}
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

    cout << "Sorted Array: ";
    array[n] = Bubble_sort(array, n);
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }

    int Target_sum;
    cout << "\nEnter Target Sum: ";
    cin >> Target_sum;

    int low = 0;
    int high = n - 1;
    while (low < high)
    {
        if (array[low] + array[high] == Target_sum)
        {
            cout << "Elements: " << array[low] << " " << array[high] << endl;
            cout << "Element Index: " << low << " " << high;
            return 0;
        }

        else if (array[low] + array[high] > Target_sum)
        {
            high--;
        }

        else
        {
            low++;
        }
    }
    cout << "No Pair Found";
    return 0;
}
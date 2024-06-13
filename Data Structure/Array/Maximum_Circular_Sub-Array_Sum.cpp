/*  You are given a circular array of integers. A circular array wraps around, which means the end of the array connects to the beginning of the array. Your task is to find the maximum sum of a sub-array in this circular array.

INPUT:
An integer array arr of size n.

OUTPUT:
An integer representing the maximum sum of a sub-array in the circular array.

EXAMPLE:
Input: arr = [5, -2, 3, 4]
Output: 12
*/

#include <iostream>
#include <climits>
using namespace std;

int kadane(int array[], int n)
{
    int curr_sum = 0;
    int max_sum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        curr_sum += array[i];
        if (curr_sum < 0)
        {
            curr_sum = 0;
        }
        max_sum = max(max_sum, curr_sum);
    }
    return max_sum;
}

int main()
{
    int n;
    cout << "Enter Array's Length: ";
    cin >> n;

    int array[n];
    int negative_array[n];
    int array_sum = 0;
    cout << "Enter Array's Elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
        array_sum += array[i];
        negative_array[i] = -array[i];
    }

    int wrap_sum = 0;
    int unwrap_sum = 0;

    unwrap_sum = kadane(array, n);
    wrap_sum = array_sum + kadane(negative_array, n);

    cout << "Maximum Circular Sub-Array Sum is: " << max(wrap_sum, unwrap_sum);
    return 0;
}
/*  Finding Sub-Arrays of an Array Having The Maximum Sum When Their Elements are Added  */

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

    // Time Complexity of O(n^3)
    // int max_sum = INT_MIN;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i; j < n; j++)
    //     {
    //         int sum = 0;
    //         for (int k = i; k <= j; k++)
    //         {
    //             sum += array[k];
    //         }
    //         max_sum = max(sum, max_sum);
    //     }
    // }
    // cout << "Maximum Array Sum is: " << max_sum;

    // int curr_sum[n + 1];
    // curr_sum[0] = 0;

    // for (int i = 1; i <= n; i++)
    // {
    //     curr_sum[i] = curr_sum[i - 1] + array[i - 1];
    // }

    // int max_sum = INT_MIN;
    // for (int i = 1; i <= n; i++)
    // {
    //     int sum = 0;
    //     for (int j = 0; j < i; j++)
    //     {
    //         sum = curr_sum[i] - curr_sum[j];
    //         max_sum = max(sum, max_sum);
    //     }
    // }
    // cout << "Maximum Array Sum is: " << max_sum;

    // Time Complexity of O(n) -- "KADANE's Algorithm"
    int curr_sum = 0;
    int max_sum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        curr_sum = curr_sum + array[i];
        if (curr_sum < 0)
        {
            curr_sum = 0;
        }
        max_sum = max(curr_sum, max_sum);
    }
    cout << "Maximum Array Sum is: " << max_sum;

    return 0;
}

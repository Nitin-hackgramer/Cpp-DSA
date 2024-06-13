/*
Record Breaker Problem
You have a list of numbers that show daily sales for a store. Your job is to find out on which days the sales were the highest ever seen up to that day and also higher than the sales on the next day.

In other words, a day is a "record breaker" if:

    1. The sales on that day are higher than all previous days' sales.
    2. The sales on that day are also higher than the sales on the next day (if there is a next day).
Write a program that takes this list of daily sales and counts how many "record breaker" days there are.
*/

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

    int mx = INT_MIN;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] > mx && (i == n - 1 || array[i] > array[i + 1] && i + 1 <= n))
        {
            ans++;
        }
        mx = max(mx, array[i]);
    }
    cout << "No. of Record Breaking Day: " << ans << endl;

    return 0;
}
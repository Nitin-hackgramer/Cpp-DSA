/* You are given an array of integers. An arithmetic subarray is a subarray that has at least two elements and the differences between consecutive elements are the same.

Your task is to write a function that finds the length of the longest arithmetic subarray in the given array.

INPUT
arr: A list of integers.
OUTPUT
An integer representing the length of the longest arithmetic subarray. */

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

    int ans = 2;
    int curr = 2;
    int prev_diff = array[1] - array[0];
    for (int j = 2; j < n; j++)
    {
        if (prev_diff == array[j] - array[j - 1])
        {
            curr++;
        }
        else
        {
            prev_diff = array[j] - array[j - 1];
            curr = 2;
        }
        ans = max(ans, curr);
    }
    cout << "Length of Longest Arithmatic Sub-Array is: " << ans << endl;

    return 0;
}
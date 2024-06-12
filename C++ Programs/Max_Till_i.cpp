/* Given a Array of Size n. for Every i from 0 to n - 1. Output the Maximum Value till i^th iteration */
#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cout << "Enter Array's Length: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max_value = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        max_value = max(max_value, arr[i]);
        cout << "Maximum Value Till " << i << "'th Iteration is: " << max_value << endl;
    }
    return 0;
}
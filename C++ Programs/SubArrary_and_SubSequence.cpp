/* Given an Array of Size n. Output Sum of Each Sub-Array of the Given Array */

#include <iostream>
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
    int total_sum = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum = sum + array[j];
            total_sum += sum;
            cout << sum << endl;
        }
    }

    cout << "Sum of Sub-Array is: " << total_sum;
    return 0;
}
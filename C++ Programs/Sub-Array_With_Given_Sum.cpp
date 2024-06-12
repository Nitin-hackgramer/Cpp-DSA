/*    You have a list of numbers and a target sum. Your task is to find a continuous part (subarray) of the list that adds up to the target sum. If such a subarray exists, return its starting and ending positions. If no such subarray exists, indicate that too.

For Example:

INPUT:
    n = 12
    array = {1,2,3,7,5}

OUTPUT:
    2,4

*/
#include <iostream>
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

    int Target;
    cout << "Enter Target Sum: ";
    cin >> Target;

    int sum;
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i; j < n; j++)
        {
            sum = sum + array[j];

            if (sum == Target)
            {
                cout << "Answer Statement: " << i + 1 << " " << j + 1;
                return 0;
            }

            else if (sum > Target)
            {
                break;
            }
        }
    }
    if (sum != Target)
    {
        cout << "No Sub-Array Found";
    }
    return 0;
}
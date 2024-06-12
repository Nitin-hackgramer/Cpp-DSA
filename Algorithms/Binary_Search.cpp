#include <iostream>
using namespace std;

int binary_Search(int array[], int key, int length)
{
    int first_index = 0, last_index = length;
    while (first_index <= last_index)
    {
        int mid = (first_index + last_index) / 2;

        if (array[mid] == key)
        {
            return mid;
        }

        else if (array[mid] > key)
        {
            last_index = mid - 1;
        }

        else if (array[mid] < key)
        {
            first_index = mid + 1;
        }
    }
}
int main()
{
    int n;
    cout << "Enter Array's Length: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[n];
    }

    int key;
    cout << "Enter Value You Want to Search: ";
    cin >> key;

    cout << "Value Found at Index: " << binary_Search(arr, key, n);
    return 0;
}
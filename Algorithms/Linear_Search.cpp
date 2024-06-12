#include <iostream>
using namespace std;

int linear_Search(int arr[], int key, int length)
{
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
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

    int key;
    cout << "Enter Value You Want to Search: ";
    cin >> key;

    cout << "Value Found at Index: " << linear_Search(arr, key, n);
    return 0;
}
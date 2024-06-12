#include <iostream>
using namespace std;

int insertion_Sort(int array[], int length)
{
    for (int i = 1; i < length; i++)
    {
        int current = array[i];
        int j = i - 1;
        while (array[j] > current && j >= 0)
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = current;
    }

    for (int i = 0; i < length; i++)
    {
        cout << array[i] << " ";
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
        cin >> arr[i];
    }
    insertion_Sort(arr, n);
    return 0;
}
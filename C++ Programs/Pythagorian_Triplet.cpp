#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3;
    cout << "Enter a Pythagorean Triplet: ";
    cin >> n1 >> n2 >> n3;
    if (n1 * n1 + n2 * n2 == n3 * n3)
    {
        cout << "Given Numbers are an Pytagorean Triplet";
    }
    else
    {
        cout << "Given Numbers are Not Pythagorean Triplet";
    }

    return 0;
}
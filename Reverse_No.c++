#include <iostream>
using namespace std;

int main()
{
    int n, num = 0;
    cin >> n;
    cout << "Original Number: " << n << endl;
    while (n != 0)
    {
        int remainder = n % 10;
        num = num * 10 + remainder;
        n = int(n / 10);
    }
    cout << "Reversed Number: " << num;
    return 0;
}
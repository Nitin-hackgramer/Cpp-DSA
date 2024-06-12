#include <iostream>
// #include <math.h>
using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    int temp_n = n;
    while (temp_n > 0)
    {
        int digit = temp_n % 10;
        // sum += pow(digit, 3);
        sum += digit * digit * digit;
        temp_n /= 10;
    }
    if (sum == n)
    {
        cout << "Given Number is an Armstrong";
    }
    else
    {
        cout << "Given Number is not an Armstrong";
    }
    return 0;
}

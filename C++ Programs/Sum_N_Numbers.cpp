#include <iostream>
using namespace std;

int main()
{
    double num, sum = 0;
    cout << "Enter Number: ";
    cin >> num;
    sum = (num * (num + 1)) / 2;
    cout << "Sum of First " << num << " natural Number is: " << sum;

    return 0;
}
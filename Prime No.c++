#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    for (int i = 2; i <= num; i++)
    {
        if (num % i == 0)
        {
            cout << "Number is Not Prime";
            break;
        }
        else if (num % i != 0 && i > num / 2)
        {
            cout << "Number is Prime";
            break;
        }
    }

    return 0;
}
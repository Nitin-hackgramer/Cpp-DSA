#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int b_num1, b_num2, pre_carry = 0, ans = 0;
    cout << "Enter Two Binary No. You Want to Add: ";
    cin >> b_num1 >> b_num2;

    while (b_num1 > 0 && b_num2 > 0)
    {
        if (b_num1 % 2 == 0 && b_num2 % 2 == 0)
        {
            ans = ans * 10 + pre_carry;
            pre_carry = 0;
        }

        else if ((b_num1 % 2 == 0 && b_num2 % 2 == 1) || (b_num1 % 2 == 1 && b_num2 % 2 == 0))
        {
            if (pre_carry == 1)
            {
                ans = ans * 10 + 0;
                pre_carry = 1;
            }

            else
            {
                ans = ans * 10 + 1;
                pre_carry = 0;
            }
        }

        else if (b_num1 % 2 == 1 && b_num2 % 2 == 1)
        {
            ans = ans * 10 + 0;
            pre_carry = 1;
        }
        b_num1 /= 10;
        b_num2 /= 10;
    }

    while (b_num1 > 0)
    {
        if (pre_carry == 1)
        {
            if (b_num1 % 2 == 1)
            {
                ans = ans * 10 + 0;
                pre_carry = 1;
            }

            else
            {
                ans = ans * 10 + 1;
                pre_carry = 0;
            }
        }

        else
        {
            ans = ans * 10 + b_num1 % 2;
        }

        b_num1 /= 10;
    }

    while (b_num2 > 0)
    {
        if (pre_carry == 1)
        {
            if (b_num2 % 2 == 1)
            {
                ans = ans * 10 + 0;
                pre_carry = 1;
            }

            else
            {
                ans = ans * 10 + 1;
                pre_carry = 0;
            }
        }

        else
        {
            ans = ans * 10 + b_num2 % 2;
        }

        b_num2 /= 10;
    }

    if (pre_carry == 1)
    {
        ans = ans * 10 + 1;
        pre_carry = 0;
    }

    string str_ans = to_string(ans);
    reverse(str_ans.begin(), str_ans.end());
    cout << "Sum of Given Binary No. is: " << str_ans;
    return 0;
}
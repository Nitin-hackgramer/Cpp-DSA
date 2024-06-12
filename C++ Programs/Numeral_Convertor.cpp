#include <iostream>
#include <algorithm>
#include <cmath>
#include <map>
using namespace std;

int decimal_to_binary()
{
    int d_num, reminder = 0;
    string b_num = "";

    cout << "Enter Number You Want to Convert in Binary: ";
    cin >> d_num;

    while (d_num != 0)
    {
        reminder = d_num % 2;
        b_num += to_string(reminder);
        d_num /= 2;
    }

    reverse(b_num.begin(), b_num.end());
    // b_num = stoi(b_num);

    cout << "Binary No is: " << b_num << "\n";
    return 0;
}

int binary_to_decimal()
{
    int b_num, d_num = 0;

    cout << "Enter Binary No. You Want to Convert in Decimal: ";
    cin >> b_num;

    string str_b_num = to_string(b_num);
    int length = str_b_num.length();

    for (int i = 0; i < length; i++)
    {
        int index_value = str_b_num[i] - '0';
        d_num += index_value * pow(2, length - i - 1);
    }
    cout << "Decimal Value is: " << d_num << "\n";
    return 0;
}

int decimal_to_hexadecimal()
{
    int d_num;
    string hex_num = "";

    cout << "Enter Number You Want to Convert into Hexa-Decimal: ";
    cin >> d_num;

    int temp_d_num = d_num;
    while (temp_d_num != 0)
    {
        int remainder = temp_d_num % 16;

        if (remainder >= 10 && remainder <= 15)
        {
            hex_num += char(55 + remainder);
        }

        else if (0 <= remainder <= 9)
        {
            hex_num += to_string(remainder);
        }

        temp_d_num /= 16;
    }
    reverse(hex_num.begin(), hex_num.end());
    cout << "\nHexa-Decimal Value of " << d_num << " is " << hex_num << "\n";

    return 0;
}

int hexadecimal_to_decimal()
{
    int d_num = 0;
    string hex_num;

    cout << "Enter Hexa-Decimal Value You Want to Convert into Decimal: ";
    cin >> hex_num;

    for (int i = 0; i <= hex_num.length(); i++)
    {
        if (hex_num[i] >= '0' && hex_num[i] <= '9')
        {
            d_num += (hex_num[i] - '0');
        }

        else if (hex_num[i] >= 'A' && hex_num[i] <= 'F')
        {
            d_num += (hex_num[i] - 'A' + 10);
        }

        d_num *= pow(16, hex_num.length() - i - 1);
    }
    cout << "Decimal Value of " << hex_num << " is: " << d_num << "\n";
    return 0;
}

int decimal_to_octal()
{
    int d_num, o_num = 0;
    string str_o_num;
    cout << "Enter Number You Want to Convert into Octal Number: ";
    cin >> d_num;

    int temp_d_num = d_num;
    while (temp_d_num > 0)
    {
        str_o_num += to_string(temp_d_num % 8);
        temp_d_num = temp_d_num / 8;
    }
    reverse(str_o_num.begin(), str_o_num.end());
    o_num += stoi(str_o_num);

    cout << "Octal Value of " << d_num << " is: " << o_num << "\n";
    return 0;
}

int octal_to_decimal()
{
    int o_num, d_num = 0;

    cout << "Enter Octal Value You Want to Convert into Decimal: ";
    cin >> o_num;

    for (int i = 0; i <= to_string(o_num).length() - 1; i++)
    {
        d_num += to_string(o_num)[i] - '0' * pow(8, to_string(o_num).length() - i - 1);
    }

    cout << "Decimal Value of " << o_num << " is: " << d_num << "\n";
    return 0;
}

int main()
{
    int choice = 0;

    cout << "Choose From The Following:- \n1 For Decimal To Binary\n2 For Decimal To Octal\n3 For Decimal To Hexa-Decimal\n4 For Binary To Decimal\n5 For Octal To Decimal\n6 For Hexa-Decimal To Decimal\n0 To Exit\n\n";

    while (1)
    {
        cout << "Enter Your Choice: ";
        cin >> choice;
        if (choice == 1)
        {
            decimal_to_binary();
        }
        else if (choice == 2)
        {
            decimal_to_octal();
        }
        else if (choice == 3)
        {
            decimal_to_hexadecimal();
        }
        else if (choice == 4)
        {
            binary_to_decimal();
        }
        else if (choice == 5)
        {
            octal_to_decimal();
        }
        else if (choice == 6)
        {
            hexadecimal_to_decimal();
        }
    }

    return 0;
}
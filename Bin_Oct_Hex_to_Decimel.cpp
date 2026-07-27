#include<bits/stdc++.h>
using namespace std;
int value(char c)
{
    if(c >= '0' && c <= '9') return c - '0';
    return c - 'A' + 10;
}
int main()
{
    string num;
    int base;
    double decimel = 0;
    cout << "Enter Number and the base (2, 8, 16): ";
         cin >> num >> base;
    int point = num.find('.');
    // If the num doesn't have any fractions
    if(point == string::npos)
    {
        point = num.length();
    }
    // Integer part
    for(int i = 0; i < point; ++i)
    {
        decimel = (decimel * base) + value(num[i]);
    }
    // Fraction part
    double power = base;
    for(int i = point + 1; i < num.length(); ++i)
    {
        decimel += (double)value(num[i]) / power;
        power *= base;
    }
    cout << decimel << endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
void convert(double deci, int base, int precision)
{
    int intprt = (int)deci;
    double fracpart = abs(deci - intprt);
    string chars = "0123456789ABCDEF";
    string res = "";
    do{
        res += chars[intprt % base];
        intprt /= base;
    }while(intprt != 0);
    reverse(res.begin(), res.end());
    if(fracpart > 0)res += '.';
    while(precision --> 0 && fracpart > 0)
    {
        fracpart *= base;
        res += chars[(int)fracpart % base];
        fracpart += (int)fracpart;
    }
    cout << res << endl;
}
int value(char c)
{
    c = toupper(c);
    if(c >= '0' && c <= '9')return c - '0';
    return c + 10 - 'A';
}
int main()
{
    string num;
    int base;
    cin >> num >> base;
    double deci = 0;
    int point = num.find('.');
    if(point == string::npos)
        point = num.length();
    for(int i = 0; i < point ; ++i)
    {
        deci = (deci * base) + value(num[i]);
    }
    double power = base;
    for(int i = point + 1; i < num.length(); ++i)
    {
        deci += (double)value(num[i]) / power;
        power *= base;
    }
    cout << deci << endl;
    //convert(decimel, 16, 5);
    return 0;
}

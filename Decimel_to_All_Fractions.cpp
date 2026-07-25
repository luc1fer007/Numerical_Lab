#include<bits/stdc++.h>
#define ll long long
using namespace std;
string convert(double num, int base, int presicion)
{
    ll intprt = (int) num;
    double fracprt = num - intprt;
    string chars = "0123456789ABCDEF";
    string res = "";
    do
    {
        res += chars[intprt % base]
        intprt /= base;
    }
    while(intprt > 0);
    if(fracprt > 0) res += ".";
    while(presicion --> 0 && fracprt > 0)
    {
        fracprt *= base;
        res += chars[(int)fracprt];
        fracprt-= (int)fracprt;
    }
    return res;
}
int main()
{
    double deci;
    cin >> deci;
    int precision;
    cin >> precision;
    cout << convert(deci, 2, precision) << endl; //Binary base 2
    cout << convert(deci, 8, precision) << endl; //Octal base 8
    cout << convert(deci, 16, precision) << endl; //Hexa base 16
    return 0;
}

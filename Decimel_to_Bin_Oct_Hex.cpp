#include<bits/stdc++.h>
using namespace std;
int main()
{
    double deci;
    int base, precision;
    cin >> deci >> base >> precision;
    int intprt = (int)deci;
    double fracprt = abs(deci - fracprt);
    string chars = "0123456789ABCDEF";
    string res = "";
    do
    {
        res += chars[intprt % base];
        intprt /= base;
    }while(intprt > 0);
    reverse(res.begin(),res.end());
    if(fracprt > 0) res += ".";
    while(precision --> 0 && fracprt > 0)
    {
        fracprt *= base;
        res += chars[(int)fracprt % base];
        fracprt -= (int)fracprt;
    }
    cout << res << endl;
    return 0;
}

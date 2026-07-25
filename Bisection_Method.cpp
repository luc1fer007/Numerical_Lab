#include<bits/stdc++.h>
using namespace std;
double f(double x)
{
    return {pow(x, 3) - x - 2};
}
int main()
{
    double a,b,mid;
    int i = 0;
    cin >> a >> b;
    if(f(a) * f(b) > 0)
    {
        cout << "No root available" << endl;
        return 0;
    }
    else
    {
        while((b - a) / 2 > 0.001)
        {
            mid = (a + b) / 2;
            if(f(mid)== 0)break;
            else if(f(a) * f(mid) < 0)b = mid;
            else a = mid;
            i++;
            cout << "Iteration: " << i << "|" << " 1st int: " << a << " | " << "2nd int: " << b <<" | Mid: " << (a+b) / 2 <<" | F(" << a << ") * " << "F(" << b << ") = " << f(a)*f(b) << endl;
        }
    }
    cout << "The approximate root is : "<< mid << endl;
    return 0;
}

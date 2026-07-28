#include<bits/stdc++.h>
using namespace std;
const double TOL = 1e-9;

double func(double x)
{
    return x * x * sqrt(x) - 5 * sqrt(x) - 19;
}

int main()
{
    double a, b, mid, res = 0;
    cin >> a >> b;

    if(func(a) * func(b) > 0)
    {
        cout << "NO root" << endl;
        return 0;
    }
    else
    {
        mid = (a * func(b) - b * func(a)) / (func(b) - func(a));
        while(abs(func(mid)) > TOL)
        {
            if(func(a) * func(mid) < 0) b = mid;
            else a = mid;
            mid = (a * func(b) - b * func(a)) / (func(b) - func(a));
            res = mid;
            cout << "Mid: " << mid << endl;
        }
        res = mid;
        cout << res << endl;
    }
    return 0;
}

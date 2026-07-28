#include<bits/stdc++.h>
using namespace std;
const double TOL = 0.001;
double func(double x)
{
    return {x * x * x - 3 * sqrt(x) - 17};
}
int main()
{
    double a, b, mid;
    cin >> a >> b;
    if(func(a) * func(b) > 0)
    {
        cout << "No roots available!"<<endl; return 0;
    }
    else
    {
        int i = 0;
        while((b - a) > TOL)
        {
            mid = (a + b) / 2;
            if(func(mid) == 0) break;
            if(func(a) * func(mid) < 0) b = mid;
            else a = mid;
            i++;
            cout << "Iteration: " << i << "|"
                 << " 1st int: " << a << " | "
                 << "2nd int: " << b <<" | Mid: "
                 << (a+b) / 2.0 <<" | F(" << a << ") * "
                 << "F(" << b << ") = " << func(mid) << endl;
        }
    }
    cout << "Root: " << (a + b) / 2.0 << endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
const double TOL = 1e-5;
double f(double x)
{
    return x * x * x - x + 1;
}
double dfx(double x)
{
    return 3 * (x * x) - 1;
}
int main()
{
    double x0, xn;
    cin >> x0;
    int i = 1;
    xn = x0 - (f(x0) / dfx(x0));
    while(fabs(x0-xn) > TOL && i <= 100)
    {
        cout << "Iteration: "<< i << "| X: "<< xn << endl;
        x0 = xn;
        xn = x0 - (f(x0) / dfx(x0));
        i++;
    }
    cout << "Root: " << xn << endl;
    return 0;
}

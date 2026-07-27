#include<bits/stdc++.h>
using namespace std;
const double TOL = 1e-5;
double g(double x)
{
    return {sqrt(x+2)};
}
int main()
{
    double x0, x1;
    cin >> x0;
    int i = 1;
    x1 = g(x0);
    while(abs(x0-x1) > TOL && i < 100)
    {
        cout << "Iteration: "<< i << "" << "| x: " << x1 << endl;
        x0 = x1;
        x1 = g(x0);
        i++;
    }
    cout << "Root: "<< x1 << endl;
    return 0;
}

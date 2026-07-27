#include<bits/stdc++.h>
using namespace std;
const double TOL = 1e-5;
double gx(double x, double y)
{
    return sqrt(10 - y * y);
}

double gy(double x, double y)
{
    return x - 1.0;
}
int main()
{
    double x0, x1, y0, y1;
    cin >> x0 >> y0;
    x1 = gx(x0,y0);
    y1 = gy(x0,y0);
    int i = 1;
    while(((fabs(x0 - x1) > TOL) || (fabs(y0 - y1) > TOL)) && i < 100)
    {
        cout << "Iteration: " << i << "| x: " << x1 << "| y: " << y1 << endl;
        x0 = x1;
        y0 = y1;
        x1 = gx(x0,y0);
        y1 = gy(x0,y0);
        i++;
    }
    cout << "Roots --> x : " << x1 <<  ", y: " << y1 << endl;
    return 0;
}
// 1 1

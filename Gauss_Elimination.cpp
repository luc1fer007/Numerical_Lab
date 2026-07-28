#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter number of equations: ";
    cin >> n;
    
    float a[10][11], x[10];
    
    // Input
    for (int i = 0; i < n; i++)
        for (int j = 0; j <= n; j++)
            cin >> a[i][j];
            
    // Gauss Elimination
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            float r = a[j][i] / a[i][i];
            
            for (int k = i; k <= n; k++)
                a[j][k] = a[j][k] - r * a[i][k];
        }
    }
    
    // Back Substitution
    for (int i = n - 1; i >= 0; i--) {
        x[i] = a[i][n];
        
        for (int j = i + 1; j < n; j++)
            x[i] = x[i] - a[i][j] * x[j];
            
        x[i] = x[i] / a[i][i];
    }
    
    // Output
    cout << "\nSolution:\n";
    for (int i = 0; i < n; i++)
        cout << "x" << i + 1 << " = " << x[i] << endl;
        
    return 0;
}

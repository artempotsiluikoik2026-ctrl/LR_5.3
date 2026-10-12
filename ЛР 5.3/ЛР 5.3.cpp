#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double f(const double x);

int main()
{
    double tp, tk, z;
    int n;
    cout << "tp = "; cin >> tp;
    cout << "tk = "; cin >> tk;
    cout << "n = "; cin >> n;

    double dt = (tk - tp) / n;
    double t = tp;

    cout << "-----------------------------" << endl;
    cout << "|" << setw(10) << "t" << " |" << setw(14) << "z" << " |" << endl;
    cout << "-----------------------------" << endl;

    while (t <= tk)
    {
        z = f(2 * t) + pow(f(t * t + 1), 2);
        cout << "|" << setw(10) << t << " |" << setw(14) << z << " |" << endl;
        t += dt;
    }
    cout << "-----------------------------" << endl;
    return 0;
}

double f(const double x)
{
    if (abs(x) >= 1)
        return (sin(2 * x) + 1) / (sin(x) + cos(x) * cos(x));
    else
    {
        double S = 0;
        int n = 0;
        double a = x * x;
        S = a;
        do
        {
            n++;
            double R = x * x * x * x / ((2 * n) * (2 * n + 1));
            a *= R;
            S += a;
        } 
        while (n < 7);

        return S;
    }
}
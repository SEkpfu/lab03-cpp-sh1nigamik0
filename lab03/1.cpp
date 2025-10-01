// 1 задание

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() 
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    cout << "a) " << endl;
    double tC = 0;
    while (tC <= 100) 
    {
        double tF = 9.0/5.0 * tC + 32;
        cout << tC << "C" << " " << tF << "F" << endl;
        tC += 10;
    }
    cout << endl;
    cout << "b) " << endl;
    double x = 0;
    do 
    {
        double y = log(x + 1) * sin(x);
        cout << "x = " << x << ", y = " << y << endl;
        x += 0.5;
    } 
    while (x <= 5);
    cout << endl;
    cout << "c) " << endl;
    const double pi = 3.14159265358979323846;
    for (double x = 0; x <= 2*pi + 0.001; x += pi/6) 
    {
        double y = cos(x);
        cout << "x = " << fixed << setprecision(2) << x << ", y = " << y << endl;
    }
    cout << endl;
    cout << "d) " << endl;
    for (double x = -1.5; x <= 1.5 + 0.001; x += 0.25) 
    {
        double y;
        if (x > 1) 
        {
            y = 1 + sqrt(abs(cos(x)));
        } 
        else if (-0.5 <= x && x <= 1) 
        {
            y = x + 1;
        } 
        else 
        {
            y = 1 - x*x;
        }
        cout << "x = " << x << ", y = " << y << endl;
    }
    return 0;
}
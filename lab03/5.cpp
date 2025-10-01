// 5 задание

#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    double ep;
    cout << "Введите малое положительное число (например 0.001): ";
    cin >> ep;
    double sum = 0;
    int sign = 1;
    int den = 1;
    int tc = 0;
    while (true) 
    {
        double term = sign * (1.0 / den);
        if (abs(term) < ep && tc > 0) 
        {
            break;
        }
        sum += term;
        sign = -sign;
        den += 2;
        tc++;
    }
    cout << "Вычисленная сумма: " << sum << endl;
    cout << "Количество слагаемых: " << tc << endl;
    return 0;
}
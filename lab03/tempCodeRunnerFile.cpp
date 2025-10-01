
#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    int n;
    double x;
    cout << "Введите целое число n: ";
    cin >> n;
    cout << "Введите вещественное число x: ";
    cin >> x;
    double resa = cos(x);
    for (int i = 1; i < n; i++) 
    {
        resa = cos(x + resa);
    }
    cout << "4a) Результат: " << resa << endl;
    double resb = sqrt(x);
    for (int i = 1; i < n; i++) 
    {
        resb = sqrt(x + resb);
    }
    resb = x + resb;
    cout << "4b) Результат: " << resb << endl;
    return 0;
}
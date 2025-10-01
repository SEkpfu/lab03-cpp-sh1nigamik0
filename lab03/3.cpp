// 3 задание

#include <iostream>
using namespace std;
int main() 
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    int n;
    cout << "Введите целое число n: ";
    cin >> n;
    double sum = 0;
    for (int i = 1; i <= n; i++) 
    {
        sum += 1.0 / (2 * i);
    }
    cout << "S = " << sum << endl;
    return 0;
}
// 8 задание

#include <iostream>
using namespace std;
int main() 
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    int n;
    cout << "Введите размер доски n (четное число): ";
    cin >> n;
    if (n % 2 != 0) 
    {
        cout << "Ошибка: n должно быть четным числом!" << endl;
        return 1;
    }
    cout << "Шахматная доска " << n << "x" << n << ":" << endl;
    cout << endl;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            if ((i + j) % 2 == 0) 
            {
                cout << " o ";
            } 
            else 
            {
                cout << " * ";
            }
        }
        cout << endl;
    }
    return 0;
}
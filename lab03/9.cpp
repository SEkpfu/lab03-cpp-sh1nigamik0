// 9 задание

#include <iostream>
using namespace std;
int main() 
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    cout << "Введите последовательность натуральных чисел (0 - конец ввода):" << endl;
    int num;
    int maxNum = 0;
    int count = 0;
    while (true) 
    {
        cin >> num;
        if (num == 0) 
        {
            break;
        }
        if (num > maxNum) 
        {
            maxNum = num;   
            count = 1;
        } 
        else if (num == maxNum) 
        {
            count++; 
        }
    }
    if (maxNum == 0) 
    {
        cout << "Последовательность пуста или содержит только нули!" << endl;
    } 
    else 
    {
        cout << "Наибольший элемент: " << maxNum << endl;
        cout << "Количество элементов, равных наибольшему: " << count << endl;
    }
    return 0;
}
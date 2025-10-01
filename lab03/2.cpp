// 2 задание

#include <iostream>
#include <climits>
using namespace std;
int main() 
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    int count = 0;
    int ncount = 0;
    int tds = 0;
    int mn = INT_MAX;
    cout << "Введите 7 целых чисел:" << endl;
    while (count < 7) 
    {
        int num;
        cin >> num;
        if (num < 0) 
        {
            ncount++;
        }
        if ((num >= 10 && num <= 99) || (num <= -10 && num >= -99)) 
        {
            tds += num;
        }
        if (num < mn) 
        {
            mn = num;
        }
        count++;
    }
    cout << "a) " << ncount << endl;
    cout << "b) " << tds << endl;
    cout << "c) " << mn << endl;
    return 0;
}
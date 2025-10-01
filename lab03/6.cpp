// 6 задание

#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    int n;
    cout << "Введите количество вершин многоугольника: ";
    cin >> n;
    double p = 0;
    double fx, fy, px, py;
    cout << "Введите координаты вершин:" << endl;
    for (int i = 0; i < n; i++) 
    {
        double x, y;
        cout << "Вершина " << i+1 << " (x y): ";
        cin >> x >> y;
        if (i == 0) 
        {
            fx = x;
            fy = y;
        } 
        else 
        {
            double side = sqrt(pow(x - px, 2) + pow(y - py, 2));
            p += side;
        }
        px = x;
        py = y;
    }
    double ls = sqrt(pow(fx - px, 2) + pow(fy - py, 2));
    p += ls;
    cout << "Периметр многоугольника: " << p << endl;
    return 0;
}
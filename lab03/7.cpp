// 7 задание

#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    int n;
    cout << "Введите количество вершин n-угольника: ";
    cin >> n;
    double x[n], y[n];
    for (int i = 0; i < n; i++) 
    {
        cout << "Введите координаты вершины " << i + 1 << " (x y): ";
        cin >> x[i] >> y[i];
    }
    double per = 0.0;
    for (int i = 0; i < n; i++) 
    {
        int next = (i + 1) % n;
        double dx = x[next] - x[i];
        double dy = y[next] - y[i];
        double side = sqrt(dx * dx + dy * dy);
        per += side;
        cout << "Длина стороны " << i + 1 << ": " << side << endl;
    }
    cout << "Периметр " << n << "-угольника: " << per << endl;
    return 0;
}
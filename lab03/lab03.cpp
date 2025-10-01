// 1 задание

// #include <iostream>
// #include <cmath>
// #include <iomanip>
// using namespace std;
// int main() 
// {
//     setlocale(LC_ALL, "ru_RU.UTF-8");
//     cout << "a) " << endl;
//     double tC = 0;
//     while (tC <= 100) 
//     {
//         double tF = 9.0/5.0 * tC + 32;
//         cout << tC << "C" << " " << tF << "F" << endl;
//         tC += 10;
//     }
//     cout << endl;
//     cout << "b) " << endl;
//     double x = 0;
//     do 
//     {
//         double y = log(x + 1) * sin(x);
//         cout << "x = " << x << ", y = " << y << endl;
//         x += 0.5;
//     } 
//     while (x <= 5);
//     cout << endl;
//     cout << "c) " << endl;
//     const double pi = 3.14159265358979323846;
//     for (double x = 0; x <= 2*pi + 0.001; x += pi/6) 
//     {
//         double y = cos(x);
//         cout << "x = " << fixed << setprecision(2) << x << ", y = " << y << endl;
//     }
//     cout << endl;
//     cout << "d) " << endl;
//     for (double x = -1.5; x <= 1.5 + 0.001; x += 0.25) 
//     {
//         double y;
//         if (x > 1) 
//         {
//             y = 1 + sqrt(abs(cos(x)));
//         } 
//         else if (-0.5 <= x && x <= 1) 
//         {
//             y = x + 1;
//         } 
//         else 
//         {
//             y = 1 - x*x;
//         }
//         cout << "x = " << x << ", y = " << y << endl;
//     }
//     return 0;
// }

// 2 задание

// #include <iostream>
// #include <climits>
// using namespace std;
// int main() 
// {
//     setlocale(LC_ALL, "ru_RU.UTF-8");
//     int count = 0;
//     int ncount = 0;
//     int tds = 0;
//     int mn = INT_MAX;
//     cout << "Введите 7 целых чисел:" << endl;
//     while (count < 7) 
//     {
//         int num;
//         cin >> num;
//         if (num < 0) 
//         {
//             ncount++;
//         }
//         if ((num >= 10 && num <= 99) || (num <= -10 && num >= -99)) 
//         {
//             tds += num;
//         }
//         if (num < mn) 
//         {
//             mn = num;
//         }
//         count++;
//     }
//     cout << "a) " << ncount << endl;
//     cout << "b) " << tds << endl;
//     cout << "c) " << mn << endl;
//     return 0;
// }

// 3 задание

// #include <iostream>
// using namespace std;
// int main() 
// {
//     setlocale(LC_ALL, "ru_RU.UTF-8");
//     int n;
//     cout << "Введите целое число n: ";
//     cin >> n;
//     double sum = 0;
//     for (int i = 1; i <= n; i++) 
//     {
//         sum += 1.0 / (2 * i);
//     }
//     cout << "S = " << sum << endl;
//     return 0;
// }

// 4 задание

// #include <iostream>
// #include <cmath>
// using namespace std;
// int main() 
// {
//     setlocale(LC_ALL, "ru_RU.UTF-8");
//     int n;
//     double x;
//     cout << "Введите целое число n: ";
//     cin >> n;
//     cout << "Введите вещественное число x: ";
//     cin >> x;
//     double resa = cos(x);
//     for (int i = 1; i < n; i++) 
//     {
//         resa = cos(x + resa);
//     }
//     cout << "4a) " << resa << endl;
//     double resb = sqrt(x);
//     for (int i = 1; i < n; i++) 
//     {
//         resb = sqrt(x + resb);
//     }
//     resb = x + resb;
//     cout << "4b) " << resb << endl;
//     return 0;
// }

// 5 задание

// #include <iostream>
// #include <cmath>
// using namespace std;
// int main() 
// {
//     setlocale(LC_ALL, "ru_RU.UTF-8");
//     double ep;
//     cout << "Введите малое положительное число (например 0.001): ";
//     cin >> ep;
//     double sum = 0;
//     int sign = 1;
//     int den = 1;
//     int tc = 0;
//     while (true) 
//     {
//         double term = sign * (1.0 / den);
//         if (abs(term) < ep && tc > 0) 
//         {
//             break;
//         }
//         sum += term;
//         sign = -sign;
//         den += 2;
//         tc++;
//     }
//     cout << "Вычисленная сумма: " << sum << endl;
//     cout << "Количество слагаемых: " << tc << endl;
//     return 0;
// }

// 6 задание

// #include <iostream>
// #include <cmath>
// using namespace std;
// int main() 
// {
//     setlocale(LC_ALL, "ru_RU.UTF-8");
//     int n;
//     cout << "Введите количество вершин многоугольника: ";
//     cin >> n;
//     double p = 0;
//     double fx, fy, px, py;
//     cout << "Введите координаты вершин:" << endl;
//     for (int i = 0; i < n; i++) 
//     {
//         double x, y;
//         cout << "Вершина " << i+1 << " (x y): ";
//         cin >> x >> y;
//         if (i == 0) 
//         {
//             fx = x;
//             fy = y;
//         } 
//         else 
//         {
//             double side = sqrt(pow(x - px, 2) + pow(y - py, 2));
//             p += side;
//         }
//         px = x;
//         py = y;
//     }
//     double ls = sqrt(pow(fx - px, 2) + pow(fy - py, 2));
//     p += ls;
//     cout << "Периметр многоугольника: " << p << endl;
//     return 0;
// }

// 7 задание

// #include <iostream>
// #include <cmath>
// using namespace std;
// int main() 
// {
//     setlocale(LC_ALL, "ru_RU.UTF-8");
//     int n;
//     cout << "Введите количество вершин n-угольника: ";
//     cin >> n;
//     double x[n], y[n];
//     for (int i = 0; i < n; i++) 
//     {
//         cout << "Введите координаты вершины " << i + 1 << " (x y): ";
//         cin >> x[i] >> y[i];
//     }
//     double per = 0.0;
//     for (int i = 0; i < n; i++) 
//     {
//         int next = (i + 1) % n;
//         double dx = x[next] - x[i];
//         double dy = y[next] - y[i];
//         double side = sqrt(dx * dx + dy * dy);
//         per += side;
//         cout << "Длина стороны " << i + 1 << ": " << side << endl;
//     }
//     cout << "Периметр " << n << "-угольника: " << per << endl;
//     return 0;
// }

// 8 задание

// #include <iostream>
// using namespace std;
// int main() 
// {
//     setlocale(LC_ALL, "ru_RU.UTF-8");
//     int n;
//     cout << "Введите размер доски n (четное число): ";
//     cin >> n;
//     if (n % 2 != 0) 
//     {
//         cout << "Ошибка: n должно быть четным числом!" << endl;
//         return 1;
//     }
//     cout << "Шахматная доска " << n << "x" << n << ":" << endl;
//     cout << endl;
//     for (int i = 0; i < n; i++) 
//     {
//         for (int j = 0; j < n; j++) 
//         {
//             if ((i + j) % 2 == 0) 
//             {
//                 cout << " o ";
//             } 
//             else 
//             {
//                 cout << " * ";
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }

// 9 задание

// #include <iostream>
// using namespace std;
// int main() 
// {
//     setlocale(LC_ALL, "ru_RU.UTF-8");
//     cout << "Введите последовательность натуральных чисел (0 - конец ввода):" << endl;
//     int num;
//     int maxNum = 0;
//     int count = 0;
//     while (true) 
//     {
//         cin >> num;
//         if (num == 0) 
//         {
//             break;
//         }
//         if (num > maxNum) 
//         {
//             maxNum = num;   
//             count = 1;
//         } 
//         else if (num == maxNum) 
//         {
//             count++; 
//         }
//     }
//     if (maxNum == 0) 
//     {
//         cout << "Последовательность пуста или содержит только нули!" << endl;
//     } 
//     else 
//     {
//         cout << "Наибольший элемент: " << maxNum << endl;
//         cout << "Количество элементов, равных наибольшему: " << count << endl;
//     }
//     return 0;
// }
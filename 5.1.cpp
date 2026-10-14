// Lab 5_1.cpp
// Варіант 14
// Обчислення значення виразу з використанням користувацької функції

#include <iostream>
#include <cmath>

using namespace std;

// Прототип допоміжної функції h(a, b)
double h(const double a, const double b);

int main()
{
    double s, t;

    // Введення початкових даних
    cout << "s = "; cin >> s;
    cout << "t = "; cin >> t;

    // Обчислення виразу за формулою Варіанту 14
    double c = (pow(h(t * t, 1), 3) + h(1, t * s * s)) / (1 + pow(h(s, t), 2));

    // Виведення результату
    cout << "c = " << c << endl;

    return 0;
}

// Визначення допоміжної функції h(a, b)
// Обчислює h(a, b) = a^2 * sin(b) + b^2 * cos(a)
double h(const double a, const double b)
{
    return a * a * sin(b) + b * b * cos(a);
}
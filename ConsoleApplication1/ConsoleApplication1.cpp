#include <iostream>
#include <numbers>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    double r;
    cout << "Введите радиус: ";
    cin >> r;

    double C = 2 * numbers::pi * r;      // дл.окр
    double S = numbers::pi * r * r;      // пл.круга

    cout << "Длина окружности: " << C << endl;
    cout << "Площадь круга: " << S << endl;
}
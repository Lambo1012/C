#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    double a, b;
    char op;
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    cout << "Выберите действие (+, -, *, /): ";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << "Результат: " << a << " + " << b << " = " << a + b << endl;
        break;
    case '-':
        cout << "Результат: " << a << " - " << b << " = " << a - b << endl;
        break;
    case '*':
        cout << "Результат: " << a << " * " << b << " = " << a * b << endl;
        break;
    case '/':
        if (b == 0)
            cout << "Ошибка: деление на ноль!" << endl;
        else
            cout << "Результат: " << a << " / " << b << " = " << a / b << endl;
        break;
    default:
        cout << "Неверное действие!" << endl;
    }
    return 0;
}
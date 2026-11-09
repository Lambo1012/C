#include <iostream>
#include <clocale>
#include <windows.h>

using namespace std;

// Функция возвращает истину (true), если число положительное (> 0),
// и ложь (false), если отрицательное (или равно нулю)
bool isPositive(int n) {
    // Оператор сравнения вернёт true, если n > 0, и false в противном случае
    return n > 0;
}

int main() {
    setlocale(LC_ALL, "Russian");

    int num1 = -42;
    int num2 = -7;
    int num3 = 10;

    cout << "Число " << num1 << " положительное? " << (isPositive(num1) ? "Да" : "Нет") << endl;
    cout << "Число " << num2 << " положительное? " << (isPositive(num2) ? "Да" : "Нет") << endl;
    cout << "Число " << num3 << " положительное? " << (isPositive(num3) ? "Да" : "Нет") << endl;

    return 0;
}
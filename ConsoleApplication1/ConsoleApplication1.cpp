#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    double a, b;
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;

    if (a == b) {
        cout << "Числа равны: " << a << " = " << b << endl;
    }
    else if (a < b) {
        cout << "Числа в порядке возрастания: " << a << " " << b << endl;
    }
    else {
        cout << "Числа в порядке возрастания: " << b << " " << a << endl;
    }

    cin.ignore();
    cin.get();
    return 0;
}
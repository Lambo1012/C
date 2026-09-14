#include <iostream>
#include <clocale> // Подключаем библиотеку для локализации
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian"); // Включаем поддержку русского языка

    cout << "Every\n";
    cout << "\thunter\n";
    cout << "\t\twants\n";
    cout << "\t\t\tto know\n";
    cout << "\t\t\t\twhere\n";
    cout << "\t\t\t\t\tdoes pheasant\n";
    cout << "\t\t\t\t\t\tsit\n";

    return 0;
}
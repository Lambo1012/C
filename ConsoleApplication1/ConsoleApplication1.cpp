#include <iostream>
#include <cstdlib>   // Для rand() и srand()
#include <ctime>     // Для time()
#include <clocale>   // Для setlocale
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");   

    srand(time(0));             // Инициализация генератора случайных чисел
    int arr1[5][10], arr2[5][5];

    // Заполняем arr1 случайными числами от 0 до 50
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 10; j++)
            arr1[i][j] = rand() % 51;   // 51 — чтобы включить 50

    // Заполняем arr2: каждый элемент = сумма двух соседних из arr1
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            arr2[i][j] = arr1[i][2 * j] + arr1[i][2 * j + 1];

    // Вывод второго массива
    cout << "arr2 (5x5):\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++)
            cout << arr2[i][j] << "\t";  // Табуляция для ровных столбцов
        cout << endl;                    // Переход на новую строку
    }
}
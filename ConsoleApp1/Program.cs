using System;

class Program 
{
    static void Main() 
    {
        // Создаем массив с числами для проверки (можно любые)
        int[] array = { 4, 8, 15, 16, 23, 42 };
        int n = array.Length; // Запоминаем длину массива 

        // 1. Сначала найдем сумму всех элементов массива
        int summa = 0; 
        for (int i = 0; i < n; i++) 
        {
            summa += array[i]; // Прибавляем к копилке текущий элемент массива
        }

        // 2. Считаем среднее арифметическое (сумму делим на количество)
        double srednee = (double)summa / n;
        Console.WriteLine("Среднее арифметическое: " + srednee); // среднее

        // 3. Ищем, сколько элементов строго больше среднего
        int count = 0; 
        for (int i = 0; i < n; i++) // Опять бежим по всему массиву
        {
            if (array[i] > srednee) // Если элемент больше, чем среднее
            {
                count++; 
            }
        }

        Console.WriteLine("Количество элементов больше среднего: " + count); 

        Console.ReadLine(); 
    }
}
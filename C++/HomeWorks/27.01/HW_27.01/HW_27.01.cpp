﻿

#include <iostream>
using namespace std;

int maxMas() {
    /*Задача 1: Найти максимальный элемент массива
       1. Создать массив из 10 чисел(заполнить вручную или с помощью rand()).
       2. Найти максимальный элемент массива с помощью цикла for.
       3. Вывести максимальный элемент.

       Пример вывода :
       Массив: 3, 8, 1, 5, 9, 4, 7, 6, 2, 0
       Максимальный элемент : 9
   */

    int mas[10] {};

    for (int i = 0; i < size(mas); i++) {
        cin >> mas[i];
    }

    cout << "Массив: ";

    for (int i = 0; i < size(mas); i++) {
        cout << mas[i] << ' ';
    }

    int max {0};

    for (int i = 0; i < size(mas); i++) {
        if (mas[i] > max)
            max = mas[i];
        
    }

    cout << '\n' << "Максимальное значение: " << max;

    return 0;
}

int sum() {
    /*Задача 2: Сумма элементов на четных позициях
1. Найти сумму элементов массива на четных позициях(индексы: 0, 2, 4...).
2. Использовать цикл for для подсчета суммы.
3. Вывести результат.

Пример вывода :
Массив: 3, 8, 1, 5, 9, 4, 7, 6, 2, 0
Сумма элементов на четных позициях : 22*/

    int index {0};
    int sum {0};
    int mas[10] {};
    int output[5] {};
    for (int i = 0; i < size(mas); i++) {
        cin >> mas[i];
    }

    cout << "Массив: " << endl;

    for (int i = 0; i < size(mas); i++) {
        cout << mas[i] << ' ';
    }

    for (int i = 0; i < size(mas); i++) {
        if (i % 2 == 0) {
            output[index] = mas[i];
            sum += mas[i];
            index++;
        }
    }

    cout << "Элементы на четных позициях: ";

    for (int i = 0; i < size(output); i++) {
        cout << output[i] << ' ';
    }

    cout << "Сумма элементов на четных позициях: " << sum << endl;

    return 0;


}

int mas() {
    /*Задача 3: Разворот массива
        1. Создать новый массив, в который записать элементы исходного массива в обратном порядке.
        2. Использовать цикл for для копирования.
        3. Вывести оригинальный и развернутый массив.

        Пример вывода :
        Оригинальный массив : 3, 8, 1, 5, 9, 4, 7, 6, 2, 0
        Развернутый массив : 0, 2, 6, 7, 4, 9, 5, 1, 8, 3*/

    int mas[10]{};
    int arr[10]{};


    for (int i = 0; i < size(mas); i++) {
        cin >> mas[i];
    }

    cout << "Оригинальный массив: ";

    for (int i = 0; i < size(mas); i++) {
        cout << mas[i] << ' ';
    }

    cout << endl;

    for (int i = size(mas) - 1; i >= 0; i--) {
        int counter{ 0 };
        arr[counter] = mas[i];
        counter++;
    }

    cout << "Перевернутый массив: ";

    for (int i = 0; i < size(arr); i++) {
        cout << arr[i] << ' ';
    }

    cout << endl;

    return 0;
}

int main() {
    setlocale(LC_ALL, "Russian");

    //maxMas();
    //sum();
    //mas()

    return 0;
}

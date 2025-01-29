
#include <Windows.h>
#include <string>
#include <iostream>
using namespace std;


int sum()
{
    setlocale(LC_ALL, "Russian");

    cout << "Сумма чисел от 1 до введенного числа." << endl;

    int a, numSum;
    numSum = 0;
    cout << "Введите любое число: ";
    cin >> a;

    for (int i = 1; i <= a; i++)
    {
        numSum = numSum + i;
    }

    cout << numSum << endl;
    
    return 0;
}

int spaceIndex()
{
    cout << "Вывод индекса первого пробела в введенной строке." << endl;

    string input;
    cout << "Введите строку: ";
    getline(cin, input);

    for (int i = 0; i < size(input); i++)
    {
        if (input[i] == ' ')
        {
            cout << "Индекс первого пробела в строке: " << i << endl;
            break;
        }
    }

    return 0;
}

int vowels()
{
    cout << "Подсчет гласных в введенной строке." << endl;

    string vowels = "АаУуОоИиЭэЫыЕеAaEeIiOoUuYy";

    int numVowels = 0;
    string input;

    cout << "Введите строку: ";
    getline(cin, input);

    for (int i = 0; i < size(input); i++)
    {
        for (int j = 0; j < size(vowels); j++)
        {
            if (input[i] == vowels[j])
            {
                numVowels++;

            }
        }

    }

    cout << "Количество гласных в строке: " << numVowels << endl;

    return 0;
}

int spaces()
{
    cout << "Убрать все лишние пробелы из введенной строки." << endl;

    int counter = 0;
    string input, output;
    bool isWord = false;

    cout << "Введите строку: ";
    getline(cin, input);
  
    for (int i = size(input) - 1; i > 0; i--)
    {

        if (input[i] == ' ')
            counter += 1;

        else
            break;

    }

    for (int i = 0; i < size(input) - counter; i++)
    {

        if (input[i] == ' ')
        {
            if (isWord)
            {
                output += input[i];
                isWord = false;

            }

        }

        else
        {
            if (!isWord)
            {
                isWord = true;
            }

            output += input[i];
        }

    }


    cout << output << "|";

    return 0;
}


int main()
{
    SetConsoleCP(1251); // Ввод с консоли русских букв.
    SetConsoleOutputCP(1251); // Вывод русских букв. Так можно выводить введненые с консоли русские буквы. А не только английские.

    //sum();
    //spaceIndex();
    //vowels();
    //spaces();



}

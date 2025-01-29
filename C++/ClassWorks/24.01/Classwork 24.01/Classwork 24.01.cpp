

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    /*
    
    bool isTrue = true;

    int sum = 0;

    cout << "У вас есть сумма чисел. На данный момент она равна нулю." << endl;

    while (isTrue)
    {
        int a = 0;

        cout << "Введите число, которое надо прибавить." << endl;
        cin >> a;
        sum += a;

        cout << "Хотите вывести сумму? Если да, введите 1. Если хотите добавить числа - то любую другую цифру." << endl;
        cin >> a;

        if (a == 1)
            break;

    }
    cout << "Сумма чисел: " << sum << endl;


    int a[3][4]
    {
        { 0, 0, 0, 0 },
        { 1, 1, 1, 1 },
        { 2, 2, 2, 2 }
    };

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << a[i][j] << endl;
        }
    }


    int numbers[]{ 1, 2, 3 };

    for (auto &n : numbers)
    {
        n = n * n;
    }

    for (int n : numbers)
    {
        cout << n << "\t";
    }


    int a[1000]{};
    int b[100]{};
    int counter = -1;

    for (int i = 0; i < size(a); i++)
    {
        a[i] = i + 1;
        cout << a[i] << "\n";

        if ((a[i] % 29 == 0) && (a[i] > 200))
        {
            counter += 1;
            b[counter] = a[i];
        }
    }

    cout << "counter: " << counter << endl;

    for (int k = 0; k < counter; k++)
    {
        cout << b[k] << endl;
    }
    */
    int a, b, c;

start:
    cout << "Введите три стороны треугольника: " << endl;
    cin >> a;
    cin >> b;
    cin >> c;

    if (a + b <= c || a + c <= b || b + c <= a)
        goto start;

    int sides[3]{ a, b, c };

    int max = sides[0];
    int intForChange = 0;
    int counter = 0;

    for (int i = 1; i < 3; i++)
    {
        if (sides[i - 1] > sides[i])
        {
            intForChange = sides[i - 1];
            sides[i - 1] = sides[i];
            sides[i] = intForChange;
        }
    }

    cout << sides[0] << endl;
    cout << sides[1] << endl;
    cout << sides[2] << endl;

    if (sides[2] * sides[2] == sides[1] * sides[1] + sides[0] * sides[0])
    {
        cout << "Треугольник прямоугольный!" << endl;
    }

    else
    {
        cout << "Треугольник не прямоугольный!" << endl;
    }
    
}
  

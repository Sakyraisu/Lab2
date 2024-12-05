#include <iostream> //потоки ввода / вывода
#include <stdio.h>
#include <math.h> // математические функции
#include <locale.h>// функция setlocale() для подключения
//кодировочной таблицы
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian"); //Подключение русского языка
    float x, y, a, b, f;
    printf("Введите число a:"); 
    cin >> a;
    printf("Введите число b:"); 
    cin >> b;
    f = (8.15 * sqrt(3) * b * log(a)) / (24.38 * cos(b) * (exp(a) - pow(a, a)));
    printf("F=%f\n", f);

    return 0;
}

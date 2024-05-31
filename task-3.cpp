#include <iostream>
#include <math.h>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    float S, E, Sn;
    printf("Введите точность Е:");
    cin >> E;
    n = 0;
    S = 0;
    Sn = 0;
    do
    {
        S = S + Sn;
        n = n + 1;
        Sn = (n + 5) / (pow(2, n) + 2);
    } while (Sn > E);
    printf("S=%f", S);
    return 0;
}


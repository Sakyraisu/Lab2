#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float x, y, z;
	 printf ("Введите число x:"); 
	 scanf ("%f", &x);
	 printf ("Введите число y:");
	 scanf("%f", &y);
	if (x >= 0 && x<= 2 && y >= -2 && y <= 2) 
	{
		z = x * x + y * y;
		printf("z =%f", z);
	}
	else 
	{
		printf ("Недопустимое значение");
	}
	return 0;
}


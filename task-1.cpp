#include <iostream> //������ ����� / ������
#include <stdio.h>
#include <math.h> // �������������� �������
#include <locale.h>// ������� setlocale() ��� �����������
//������������ �������
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian"); //����������� �������� �����
    float x, y, a, b, f;
    printf("������� ����� a:"); 
    cin >> a;
    printf("������� ����� b:"); 
    cin >> b;
    f = (8.15 * sqrt(3) * b * log(a)) / (24.38 * cos(b) * (exp(a) - pow(a, a)));
    printf("F=%f\n", f);

    return 0;
}

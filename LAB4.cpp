#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#define n 15 
int main()
{
	float ms[n], a;
	int i, j;
	setlocale(LC_ALL, "Russian");
	printf("������� �������� ������a\n");
	for (i = 0; i < n; i++)
		scanf_s("%f", &ms[i]);
	system("CLS");
	printf("�������� ������:\n");
	for (i = 0; i < n; i++)
		printf("%.2f ", ms[i]);
	i = 0;
	j = n - 1;
	for (; i < j; i++, j--)
	{
		a = ms[i];
		ms[i] = ms[j];
		ms[j] = a;
	}
	printf("\n����� ������:\n");
	for (i = 0; i < n; i++)
		printf("%.2f ", ms[i]);
	return 0;
}

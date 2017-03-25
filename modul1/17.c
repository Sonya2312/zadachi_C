#include <stdio.h>
#include <locale.h>


double binom(double * mas, int a)
{
	double b, c;
	int i;
	b = mas[0];
	for (i = 0; i < a; i++)
	{
		if (b < mas[i])
			b = mas[i];
	}
	c = mas[0];
	for (i = 0; i < a; i++)
	{
		if (c > mas[i])
			c = mas[i];
	}
	return b - c;
}

int main()
{
	setlocale(0, "russian");
	int a, i;
	double d;
	printf("Пожалуйста, введите количество символов в массиве: ");
	scanf("%i", &a);
	double * mas = (double *)malloc(a*8);
	printf("Пожалуйста, введите массив: ");
	for (i = 0; i < a; i++)
		scanf("%lf", &mas[i]);
	d = binom(mas, a);
	printf("Разность между наибольшим и наименьшим значениями: %lf\n", d);
	free(mas);
	return 0;
}


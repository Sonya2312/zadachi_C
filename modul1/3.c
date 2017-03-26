#include <stdio.h>

int main()
{

float a, b, k, z, x, y;
printf("Пожалуйста, введите значения сопротивлений в комплексном виде: ");
scanf("%f+%fi %f+%fi", &a, &b, &k, &z);
x = (a*a*k + a*k*k + a*z*z + b*b*k) / ((a + k)*(a + k) + (b + z)*(b + z));
y = (a*a*z + b*b*z + b*k*k + b*z*z) / ((a + k)*(a + k) + (b + z)*(b + z));
printf("Эквивалентное комплексное сопротивление: %.4f+%.4fi", x, y);
return 0;
}

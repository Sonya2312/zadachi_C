#include <stdio.h>
#include <locale.h>

int main()
{
int i;
char sonya[100];
for (i = 0; i< 100; i++)
sonya[i] = '\0';
printf("Пожалуйста, введите строчку :");
gets(sonya);
char c;
c = sonya[0];
for (i = 0; i < 100; i++)
{
if (c < sonya[i])
{
c = sonya[i];
}
}
printf("Наибольший ASCII код у символа %c\n", c);

return 0;
}

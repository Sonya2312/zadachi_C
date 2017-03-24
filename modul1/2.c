#include <stdio.h>
int main()
{
int day;
int month;
int num;
printf("Пожалуйста, введите день вашего рождения:");
scanf("%d", &day);
printf("Пожалуйста, введите месяц вашего рождения:");
scanf("%d", &month);
num=day;
day=month;
month=num;
printf("день %d\n", day);
printf("месяц %d\n",month);
return 0;
}

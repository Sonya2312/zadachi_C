    #include <stdio.h>

int main()
{
float x, a, b, d;
char c;
int i;
printf("Пожалуйста, введите числа и операцию\n");
scanf("%f%c%f", &a, &c, &b);
switch (c)
{
case '+':
d = a + b;
break;
case '-':
d = a - b;
break;
case '*':
d = a * b;
break;
case '/':
if (b == 0)
{
printf("На ноль делить нельзя!");
}
else
{
d = a / b;
}
break;
case '^':
x = a;
if (b != 0)
{
for ( i = 1; i < b; i++)
{
a *= x;
}
d = a;
break;
}
else
d = 1;
break;
case '%':
d = 0.01*a*b;
}
printf("%f\n\n", d);
return 0;
}

   

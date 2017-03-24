    #include <stdio.h>
    #include <math.h>

    int main() {
    float a,b,c;
    c=b/100;
    char sign='+';
    while (sign != '0') {
    printf("Пожалуйста, введите символ желаемой операции: ");
    scanf("%c%*c", &sign);
    if (sign == '0') { break; }
    if (sign == '+' || sign == '-' || sign == '*' || sign == '/' || sign == '%' || sign == '^') {
    printf("Первое число=");
    scanf("%f%*c", &a);
    printf("Второе число равно=");
    scanf("%f%*c", &b);
    switch (sign) {
    case '+':
    printf("%.2f\n", a+b);
    break;
    case '-':
    printf("%.2f\n", a-b);
    break;
    case '*':
    printf("%.2f\n", a*b);
    break;
    case '/':
    if (b != 0) printf("%.2f\n", a/b);
    else printf("Деление на ноль!\n");
    case '%':
    printf("%.2f\n", a/c);
    case '^':
    printf("powf :%.2f\n", powf (a, b) );
    }
    }
    else printf("Неверно указан знак операции\n");
    }
    }
  

   

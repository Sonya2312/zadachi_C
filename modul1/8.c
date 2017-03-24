#include <stdio.h>
#include <math.h>

int main(){
int a, b, c;
float d, x1, x2, xo;
printf("Введите коэффиценты: ");
scanf("%d %d %d",&a,&b,&c);
d=b*b-4*a*c;
if (d<0){printf("Отрицательный дискриминант");}
else{ xo = sqrt(d);
x1=(-b+xo)/(2*a);
x2=((-b-xo)/(2*a));
if(d==0){printf("%f\n",x1);}
else{
printf("%f\n",x1);
printf("%f\n",x2);}}
return 0;
}

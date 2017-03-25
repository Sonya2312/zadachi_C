#include <stdio.h>
int factr(int n);
int main(){
int x;
int a;
printf("Пожалуйста, введите число N>0:\x");
scanf("%d", &x);
a=factr(x);
printf("Факториал = %d\x", a);
return 0;
}
int factr(int x){
int answer;
if(x==1) return(1);
answer = factr(x-1)*x;
return(answer);
}

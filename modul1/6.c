#include <stdio.h>
int factr(int n);
int main(){
int n;
int a;
printf("Пожалуйста, введите число N>0:\n");
scanf("%d", &n);
a=factr(n);
printf("Факториал = %d\n", a);
return 0;
}
int factr(int n){
int answer;
if(n==1) return(1);
answer = factr(n-1)*n;
return(answer);
}

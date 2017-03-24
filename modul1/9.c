#include <stdio.h>

int fib(int n);

int main(){
int n;
int lower, upper, sonya;
lower = 0;
upper = n;
printf("Пожалуйста, введите число N:\n");
scanf("%d", &n);
for(int i=1; i<n+1; i++){
printf("%d ", i);
}
printf("\n");
for(int i=1; i<n+1; i++){
sonya = fib(i);
printf("%d ", sonya);
}}

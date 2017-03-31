#include <stdio.h> 
#include <stdlib.h> 

int main(void) 
{ 
char str[30]; 
int i; 
int big = 0; 

printf("Input str:\n"); 
scanf("%s", str); 

for (i = 0; str[i] != 0; i++) 
if (str[i] >= str[big]) 
big = i; 

printf("Otvet: %c\n", str[big]); 

system("pause"); 
}

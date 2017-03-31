   #include <stdio.h> 
#include <stdlib.h> 

int main(void) 
{ 
char str[30]; 
int i; 
int big = 0; 

while (1) 
{ 
printf("Input str. If you want to finish - input \"exit\":\n"); 
scanf("%s", str); 

if (str[0] == 'e' && str[1] == 'x' && str[2] == 'i' && str[3] == 't') 
break; 

for (i = 0; str[i] != 0; i++) 
printf("##"); 
printf("\n"); 
} 
system("pause"); 
}


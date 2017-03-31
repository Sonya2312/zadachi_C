#include <stdio.h> 
#include <stdlib.h> 

double Func(double *a, int len) 
{ 
int i; 
double small = a[0]; 
double big = a[0]; 

for (i = 0; i < len; i++) 
{ 
if (a[i] >= big) 
big = a[i]; 
if (a[i] <= small) 
small = a[i]; 
} 

return big - small; 
} 

int main(void) 
{ 
double arr[5] = {3, 2, 1.5, 0.5, 5}; 
int i; 

printf("Tvoi massiv:"); 
for (i = 0; i < 5; i++) 
printf("%lf ", arr[i]); 
printf("\n"); 
printf("Otvet: %lf\n", Func(arr, 5)); 

system("pause"); 
}

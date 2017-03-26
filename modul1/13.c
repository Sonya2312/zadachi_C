    #include <stdio.h>

int main()
{
char sonya[100];
int vlad = 0;

gets(sonya);
for (int i = 0; i < 100; i++)
{
if ( (sonya[i] == ' ') || (sonya[i] == '\0') )
{
for (int c = 0; c < vlad; c++)
printf("-");
printf("\n");
for (int c = 0; c < vlad - 1; c++)
printf(" ");
printf("|\n");
for (int c = 0; c < vlad; c++)
printf("-");
printf("\n");
vlad = 0;
}
else
vlad++;
if (sonya[i] == '\0')
break;
}
return 0;
}

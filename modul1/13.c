    #include <stdio.h>
    #include <ctype.h>

    int main()
    {
    int c, i, j, nc;
    i=j=nc=0;
    int dig[17];

    for(i=0; i<17; i++)
    dig[i] = 0;
    while((c=getchar()) != EOF)
    {
    nc++;
    if(c==' ' || c=='\n' || c=='\t' || ispunct(c))
    {
    dig[nc-1]++;
    nc=0;
    }
    }
    for(i=1; i<17; i++) 
    {
    if(i<10)
    printf(" %d ", i);
    else
    printf("%d ", i);
    for(j=dig[i]; j>0; j--)
    printf("*");
    printf("\n");
    }
    printf("\n");
    return 0;
    }




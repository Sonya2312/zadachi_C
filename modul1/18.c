    #include <stdio.h>
    #include <stdlib.h>

    void copy(char *c,char *d)
    { char str[100];
    FILE *C,*D;
    C=fopen(c,"r");
    D=fopen(d,"w");
    char i;
    while((i=fgetc(C))!=EOF)
    {
    fputc(i,D);
    }
    }
    int main()
    {
    char a[100],b[100];
    gets(a);
    gets(b);
    copy(a,b);
    printf("Ok");
    return 0;
    }



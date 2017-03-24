    #include <stdio.h>
    #define MAX 1000

    void reverse(char s[], int n);
    int main(int argc, char **argv)
    {

    char line[MAX];
    int i, m;
    char c;
    i=0;
    while((c=getchar()) != EOF)
    {
    line[i]=c;
    i++;
    if(c=='\n')
    {
    line[i]='\0';
    m=i;
    i=0;
    reverse(line, m);
    printf("%s\n", line);
    }
    }
    return 0;
    }

    void reverse(char s[], int n)
    {
    char tmp[MAX];
    int i, j;
    for(i=0; i<n; i++)
    tmp[i]=s[i];
    i-=2;
    for(j=0; j<(n-1); j++, i--)
    s[j]=tmp[i];
    }




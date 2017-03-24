    #include <stdio.h>

    int main ( void )
    {
    int biggest = 0, c;

    while ((c = getchar()) != EOF) {
    if ( c > biggest)
    biggest = c;
    }

    printf("%s%c%3d\n","The symbol whith biggest ASCII code number is ", biggest, biggest);
    return 0;
    }



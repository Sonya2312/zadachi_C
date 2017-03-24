 
         #include <stdio.h>
    #include <locale.h>

    int main()
    {
    setlocale(0, "russian");

    int count = 0, a = 0, index = 0, b = 0 ;
    int c;
    char sis[100], sos[100];
    for (b = 0; b < 100; b++)
    {
    sis[b] = '\0';
    }
    for (b = 0; b < 100; b++)
    {
    sos[b] = '\0';
    }
    printf("Введите вашу строку: ");
    gets(sos);

    while (a < 100)
    {
    if (sos[a + 1] == sos[a] && sos[a+1] != '\0')
    {
    for (c = a ; c < 100; c++)
    {
    if (sos[c] != sos[c + 1])
    {
    break;
    }
    else count++;
    }
    a = a + count;

    }
    else
    {
    sis[index] = sos[a];
    index++;
    }
    a++;
    count = 0;
    }

    printf("Уважаемый, Влад, это ваша новая строчка: %s", sis);
    return 0;
    }




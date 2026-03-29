#include<stdio.h>
#include<conio.h>

    int main()
    {
    char ch = '\0';

    printf("\n Enter A Character : ");
    scanf("%c",&ch);

    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))

    {
        printf("\n\n TRUE.",ch);
    }

    else

    {
        printf("\n\n FALSE", ch);
    }

    getch();
    return 0;

    }

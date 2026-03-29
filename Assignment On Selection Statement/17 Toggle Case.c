#include<stdio.h>
#include<conio.h>

    int main()
    {
    char ch = '\0';

    printf("\n Enter A Character : ");
    ch = getche();

    printf("\n Enter Letter is : %c.\n",ch);

    if(ch >= 'a' && ch <= 'z')

    {
        ch = ch - 32;

        printf("\n Letter after converting to UpperCase : %c",ch);
    }

    else if(ch >= 'A' && ch <= 'Z')

    {
        ch = ch + 32;

        printf("\n Letter after converting to LowerCase : %c",ch);
    }

    else

    {
        printf("\n Letter %c is not Alphabet", ch);
    }

    getch();
    return 0;

    }

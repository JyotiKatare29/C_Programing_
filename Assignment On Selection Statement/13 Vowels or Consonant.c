#include<stdio.h>
#include<conio.h>

    int main()

    {

    char ch = '\0';

    printf("\n Enter A Character : ");
    ch = getche();

    if( ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' )

    {
        printf("\n\n Entered Letter %c is Vowel.",ch);
    }

    else if( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') )

    {
        printf("\n\n Entered Letter %c is Consonant.",ch);
    }

    else

    {
        printf("\n Given Letter %c is not Vowel or Consonant", ch);
    }

    getch();
    return 0;

    }

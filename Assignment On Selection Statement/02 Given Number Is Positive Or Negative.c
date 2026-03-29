#include<stdio.h>
#include<conio.h>

    int main()
    {
    int Num;

    printf("Enter A Number: ");
    scanf("%d",&Num);

    if(Num >= 0)

    {
        printf("Given Number %d Is Positive",Num);
    }

    else

    {
        printf("Given Number %d Is Negative",Num);
    }

    getch();
    return 0;

    }

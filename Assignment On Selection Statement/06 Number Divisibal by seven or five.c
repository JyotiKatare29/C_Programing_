#include<stdio.h>
#include<conio.h>

    int main()
    {
    int Num;

    printf("Enter A number : ");
    scanf("%d",&Num);

    if(Num % 5 == 0 && Num % 7 == 0)

    {
        printf("Number %d is divisible by 5 and 7",Num);
    }

    else

    {
        printf("Number %d is not divisible by 5 and 7",Num);
    }

    getch();
    return 0;

    }

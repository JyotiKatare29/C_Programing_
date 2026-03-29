#include<stdio.h>
#include<conio.h>

    int main()
    {
    int Num;

    printf("Enter A Number: ");
    scanf("%d",&Num);

    (Num % 2 == 0) ? printf("The Number Is Even") : printf("The Number Is Odd");

    getch();
    return 0;

    }

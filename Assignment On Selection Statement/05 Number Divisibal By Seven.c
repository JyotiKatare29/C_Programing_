#include<stdio.h>
#include<conio.h>

    int main()
    {
    int No;

    printf("Enter A Number: ");
    scanf("%d",&No);

    if(No % 7 == 0)

    {
      printf("Number %d is divisible by 7",No);
    }

    else

    {
       printf("Number %d is not divisible by 7",No);
    }

    getch();
    return 0;

    }

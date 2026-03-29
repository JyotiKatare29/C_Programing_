#include<stdio.h>
#include<conio.h>

    int main()
    {
    int No1 = 0,No2 = 0;

    printf("Enter 1 Number = ");
    scanf("%d",&No1);

    printf("Enter 2 Number = ");
    scanf("%d",&No2);

    if(No1 > No2)

    {
        printf("Greater number is: %d",No1);
    }

    else

    {
        printf("Greater number is: %d",No2);
    }

    getch();
    return 0;
    }

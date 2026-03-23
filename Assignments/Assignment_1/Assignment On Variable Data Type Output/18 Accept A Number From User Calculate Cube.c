#include<stdio.h>
#include<conio.h>

    int main()
    {
        int No = 0,Cub = 0;

        printf("\n Enter A Number =");
        scan("%d",&No);

        Cub = No*No*No;

        printf("\n Cube OF Given Number %d is = %d",No,Cub);

        getch();
        return 0;
    }

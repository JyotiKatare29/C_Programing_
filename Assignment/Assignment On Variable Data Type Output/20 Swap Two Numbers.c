#include<stdio.h>
#include<conio.h>

    int main()
    {
        int No1 = 0,No2 = 0,Temp = 0;

        printf("\n Enter 1 Number = ");
        scanf("%d",&No1);

        printf("\n Enter 2 Number  =");
        scanf("%d",&No2);

        printf("\n Before Swap = Number =%d,Number =%d",No1,No2);

        /// SWAP LOGIC

        Temp = No1;
        No1 = No2;
        No2 = Temp;

        printf("\n After Swap = Number %d,Number = %d",No1,No2);

        getch();
        return 0;
    }

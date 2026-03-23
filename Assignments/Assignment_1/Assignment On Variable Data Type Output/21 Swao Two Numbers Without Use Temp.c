#include<stdio.h>
#include<conio.h>

    int main()
    {
        int No1 = 0,No2 = 0;

        printf("\n Enter 1 Number = ");
        scanf("%d",&No1);

        printf("\n Enter 2 Number = ");
        scanf("%d",&No2);

        printf("\n Befor Swap = Number =%d,Number =%d",No1,No2);

        /// Swap Logic ///

        No1 = No1 + No2;
        No2 = No1 - No2;
        No1 = No1 - No2;

        printf("\n After Swap = Number =%d,Number =%d",No1,No2);

        getch();
        return 0;

    }

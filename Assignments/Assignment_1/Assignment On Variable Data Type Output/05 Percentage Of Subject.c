#include<stdio.h>
#include<conio.h>

    int main()

    {
        int S1 = 0,S2 = 0,S3 = 0,Total = 0;
        float per = 0;

        printf("\n Enter 1 Subject Marks = ");
        scanf("%d",&S1);

        printf("\n Enter 2 Subject Marks = ");
        scanf("%d",&S2);

        printf("\n Enter 3 Subject Marks = ");
        scanf("%d",&S3);

        Total = S1+S2+S3;
        per = (float)Total/3;

        printf("\n Enter Total Marks Of Subject = %d + %d + %d = %d",S1,S2,S3,Total);

        printf("\n Percentage = %f",per);

        getch();
        return 0;
    }

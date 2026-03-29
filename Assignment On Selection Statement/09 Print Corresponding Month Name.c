#include<stdio.h>
#include<conio.h>

    int main()
    {
        int M = 0;

        printf("\n Enter Month Number (1-12) = ");
        scanf("%d",&M);

        if( M == 1 )
        {
            printf("January");
        }
        else if( M == 2 )
        {
            printf("February");
        }
        else if( M == 3 )
        {
            printf("March");
        }
        else if( M == 4 )
        {
            printf("April");
        }
        else if( M == 5 )
        {
            printf("May");
        }
        else if( M == 6 )
        {
            printf("June");
        }
        else if( M == 7 )
        {
            printf("July");
        }
        else if( M == 8 )
        {
            printf("August");
        }
        else if( M == 9 )
        {
            printf("September");
        }
        else if( M == 10 )
        {
            printf("Octomber");
        }
        else if( M == 11 )
        {
            printf("November");
        }
        else if( M == 12 )
        {
            printf("December");
        }
        else
        {
            printf("Invalid Month");
        }

        getch();
        return 0;

    }


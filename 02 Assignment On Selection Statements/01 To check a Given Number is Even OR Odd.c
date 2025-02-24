#include<stdio.h>
#include<conio.h>
int main()
{
     int No = 0, Even = 0, Odd = 0;
     printf("\n Enter a Number=");
     scanf("%d",&No);

         if( (No % 2 == 0) && (No != 0) )
            {
                printf("\n Number is Even");
            }

         else if( No % 2 == 1 )
            {
                printf("\n Number is Odd");
            }



            getch();
            return 0;
}

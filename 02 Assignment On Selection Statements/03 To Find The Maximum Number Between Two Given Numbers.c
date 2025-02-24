#include<stdio.h>
#include<conio.h>
int main()
{
    int No=0, Max = 0;
    printf("\n Enter Two Number=");
    scanf("%d%d",&No,&No);

          if(No==0)
          {
               Max = No;
          }
          if (No > Max)
          {
              Max = No;
          }
    printf("\n The Greater Number is = %d",No);

    printf("\n =======THANKS=======");
    getch();
    return 0;
}

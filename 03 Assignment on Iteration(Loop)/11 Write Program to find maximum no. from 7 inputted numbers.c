#include<stdio.h>
#include<conio.h>
int main()
{
    int i = 0, No[7] = {0}, Max = 0;
         for(i = 1; i <= 7; i++)
         {
             printf("\n Enter a Number = ");
             scanf("%d",&No[i]);
         }

    ///LOGIC TO FIND MAX

      if(i==0)
      {
           Max=No[i];
      }
      for(i = 1; i <= 7; i++)
      {
          if (No[i]>Max)
          {
              Max=No[i];
          }
      }
      printf("\n Result => Maximum Number is = %d",Max);
      getch();
      return 0;
}

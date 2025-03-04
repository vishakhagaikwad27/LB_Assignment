#include<stdio.h>
#include<conio.h>
int main()
{
    int i =0, No[10] = {0}, Max = 0, Min = 0;

    for(i = 1; i<=10; i++)
    {
         printf("\n Enter a Number = ");
         scanf("%d",&No[i]);
    }

    ///LOGIC TO FIND MIN
    if(i == 0)
    {
        Min = No[i];
    }
     for(i = 1; i <= 10; i++)
      {
          if (No[i]<Min)
          {
              Min=No[i];
          }
      }

      ///LOGIC TO FIND MAX
      if(i == 0)
      {
          Max == No[i];
      }
      for(i = 1; i <=10; i++)
      {
          if(No[i]>Max)
          {
             Max=No[i];
          }
      }
      printf("\n Result => Minimum Number is =%d",Min);
      printf("\n Result => Maximum Number is =%d",Max);
      getch();
      return 0;
}

#include<stdio.h>
#include<conio.h>
int main()
{
   int i = 0, No = 0, Sum = 0;
   printf("\n Enter 10 Numbers = ");
   for(i = 0; i < 10; i++)
   {
       scanf("%d",&No);
       Sum += No;
   }
   printf("\n The Sum is : %d",Sum);
   getch();
   return 0;
}

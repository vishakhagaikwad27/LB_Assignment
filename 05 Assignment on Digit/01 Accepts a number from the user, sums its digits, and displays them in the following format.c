#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 0, Dig = 0, dsum = 0, Temp = 0;
    printf("\n Enter a Number=");
    scanf("%d",&No);

    Temp = No;
    while(Temp != 0)
    {
       Dig  = Temp % 10;
       dsum = dsum + Dig;
       Temp = Temp / 10;
    }

    printf("\n Result => Digit Sum is = %d",dsum);
}

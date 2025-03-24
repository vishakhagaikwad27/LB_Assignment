#include<stdio.h>
#include<conio.h>
int main()
{
    int  No = 0, Dig = 0, dMul = 1, Temp = 0;
    printf("\n Enter a Number = ");
    scanf("%d",&No);

    Temp = No;
    while(Temp != 0)
    {
        Dig = Temp % 10;
        dMul = dMul * Dig;
        Temp = Temp / 10;
    }
    printf("\n Digit Multiplication of Given Number %d = %d",No,dMul);
    getch();
    return 0;
}

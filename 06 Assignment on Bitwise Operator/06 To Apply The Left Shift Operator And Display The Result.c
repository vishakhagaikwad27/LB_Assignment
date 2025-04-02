#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 0, Res=0;
    printf("\n Enter a Number=");
    scanf("%d",&No);

    Res = No << 6;

    printf("\n =========================");

    printf("\n Result => %d << 6 = %d",No,Res);

    printf("\n ===========THANKS===========");
    getch();
    return 0;
}

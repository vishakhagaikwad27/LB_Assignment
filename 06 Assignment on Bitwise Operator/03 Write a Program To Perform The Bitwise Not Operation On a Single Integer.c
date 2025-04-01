#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 0, Res = 0;
    printf("\n Enter a Number=");
    scanf("%d",&No);

    Res = ~ No;

    printf("\n ===============================");

    printf("\n Result => ~%d = %d",No,Res);

    printf("\n\n ============THANKS=============\n");
    getch();
    return 0;
}

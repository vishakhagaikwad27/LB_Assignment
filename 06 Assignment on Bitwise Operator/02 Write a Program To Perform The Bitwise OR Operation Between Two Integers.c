#include<stdio.h>
#include<conio.h>
int main()
{
    int No1 = 0, No2 = 0, Res = 0;
    printf("\n Enter a 1st Number=");
    scanf("%d",&No1);
    printf("\n Enter a 2nd Number=");
    scanf("%d",&No2);

    Res = No1 | No2;

    printf("\n =================================");

    printf("\n Result => %d | %d = %d",No1,No2,Res);

    printf("\n ==============THANKS==============\n");
    getch();
    return 0;
}

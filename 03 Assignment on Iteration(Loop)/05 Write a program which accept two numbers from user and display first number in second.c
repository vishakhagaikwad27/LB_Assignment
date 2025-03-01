#include<stdio.h>
#include<conio.h>
int main()
{
    int i = 0, No1 = 0, No2 = 0;
    printf("\n Enter 1st Number = ");
    scanf("%d",&No1);
    printf("\n Enter 2nd Number = ");
    scanf("%d",&No2);

    for(i=0; i<No2; i++)
    {
        printf("%d",&No1);
    }
    printf("\n");
    getch();
    return 0;
}

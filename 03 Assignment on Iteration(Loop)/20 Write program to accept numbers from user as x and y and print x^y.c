#include<stdio.h>
#include<conio.h>
int main()
{
    int x = 0, y = 0,Pow = 0, Result = 0;
    printf("\n Enter X: ");
    scanf("%d",&x);
    printf("\n Enter Y: ");
    scanf("%d",&y);

    Result = Pow(x,y);

    printf("\n %d ^ %d = %d",x,y,Result);
    getch();
    return 0;
}

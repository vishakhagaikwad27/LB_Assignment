#include<stdio.h>
#include<conio.h>
int main()
{
    double No = 0, Square_Root = 0;
    printf("\n Enter a Number = ");
    scanf("%lf",&No);

    Square_Root = sqrt(No);

    printf("\n The Square Root of %.2lf is = %.2lf",No,Square_Root);
    printf("\n ============THANKS============");
    getch();
    return 0;
}

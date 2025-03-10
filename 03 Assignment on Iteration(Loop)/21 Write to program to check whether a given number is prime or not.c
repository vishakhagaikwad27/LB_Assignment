#include<stdio.h>
#include<conio.h>
int main()
{
    int i = 0, No = 0, Count = 0;
    printf("\n Enter any Number = ");
    scanf("%d",&No);

    for(i=1; i<= No; i++)
    {
        if(No%i == 0)
        {
            Count++;
        }
    }
    if(Count == 2)
    {
        printf("\n The Number %d is Prime",No);
    }
    else
    {
        printf("\n The Number %d is Not Prime",No);
    }
    getch();
    return 0;
}

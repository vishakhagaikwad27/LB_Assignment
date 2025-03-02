#include<stdio.h>
#include<conio.h>
int main()
{
    char ch='\0', Spt='\0', Ept='\0';
    printf("\n Enter a Starting Point = ");
    scanf("%c",&Spt);

    fflush(stdin);

    printf("\n Enter a Ending Point = ");
    scanf("%c",&Ept);

    if(Spt < Ept)
    {
        for(ch=Spt; ch<=Ept; ch++)
            {
                printf("\n %c",ch);
            }
    }
    else
    {
        for(ch=Spt; ch>=Ept; ch--)
            {
                printf("\n%c",ch);
            }
    }
    printf("\n =========THANKS=========");
    getch();
    return 0;
}

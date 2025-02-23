#include<stdio.h>
#include<conio.h>
int main()
{
    int A = 0, B = 0, C = 0, Temp = 0;

    printf("\n Enter Number 1 = ");
    scanf("%d",&A);

    printf("\n Enter Number 2 = ");
    scanf("%d",&B);

    printf("\n Enter Number 3 = ");
    scanf("%d",&C);

    printf("\n Before Swapping : A = %d. B = %d.  C = %d",A,B,C);

    ///Logic for Swapping

    Temp = A;
    A = C;
    C = B;
    B = Temp;

    printf("\n\n After Swapping : A = %d. B = %d. C = %d",A,B,C);

    printf("\n===================THANKS=====================");
    getch();
    return 0;
}



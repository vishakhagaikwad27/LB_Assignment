#include<stdio.h>
#include<conio.h>
int main()
{
    int A = 0, B = 0;

    printf("\n Enter Number 1=");
    scanf("%d",&A);

    printf("\n Enter Number 2=");
    scanf("%d",&B);

    printf("\n Before Swap : A = %d.\t B = %d", A, B);

    ///Logic for Swapping

    A = A + B;
    B = A - B;
    A = A - B;

    printf("\n\n After Swap : A = %d.\t B = %d", A, B);

    printf("\n===========THANKS===========");
    getch();
    return 0;
}


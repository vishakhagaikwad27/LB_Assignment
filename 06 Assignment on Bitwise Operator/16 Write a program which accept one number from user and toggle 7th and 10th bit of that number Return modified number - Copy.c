#include<stdio.h>
#include<conio.h>
typedef long long int LLI;

LLI Toggle_Any_Bit(LLI,int);

int main()
{
    LLI No = 0, Ret = 0;

    printf("\n Enter a Number = ");
    scanf("%d",&No);

    Ret = No;

    printf("\n\n ==========================**************************===============================\n");
    Ret = Toggle_Any_Bit(Ret,7);
    Ret = Toggle_Any_Bit(Ret,10);

    printf("\n After Toggle 7th Bit and 10th Bit of Given Number %lld Modified Number is = %lld",No,Ret);

    printf("\n\n ============================*****************************============================");
    getch();
    return 0;
}
LLI Toggle_Any_Bit(LLI Num,int Bt)
{
    Num = ((Num) ^ (1 << (Bt-1)));

    return Num;
}

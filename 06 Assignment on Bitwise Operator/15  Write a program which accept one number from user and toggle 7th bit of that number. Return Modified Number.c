#include<stdio.h>
#include<conio.h>
typedef long long int LLI;

LLI Toggle_7th_Bit(LLI);

int main()
{
    LLI No = 0, Ret = 0;
    printf("\n Enter a Number = ");
    scanf("%d",&No);

    printf("\n =======================***************========================");

    Ret = Toggle_7th_Bit(No);
    printf("\n After Toggle 7th Bit of Given Number %lld Modified Number is = %lld",No,Ret);

    printf("\n =========================***************=======================");
    getch();
    return 0;
}
LLI Toggle_7th_Bit(LLI Num)
{
    Num = ((Num) ^ (1 << 6));

    return Num;
}


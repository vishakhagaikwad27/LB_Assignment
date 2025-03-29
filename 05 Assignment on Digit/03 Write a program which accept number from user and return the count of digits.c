#include<stdio.h>
int CountDigits(int num)
{
    int count = 0;
    while(num != 0)
    {
        count++;
        num /= 10;                                ///Remove Last Digit
    }
    return count;
}

int main()
{
    int number;
    printf("\n Enter a Number = ");               ///Accept Input From User
    scanf("%d",&number);

    if(number < 0)
    {
        number = -number;                         ///Convert Negative Number To Positive Number
    }
    printf("\n Number of Digits = %d",CountDigits(number));  ///Call Function and Display Result
    return 0;
}

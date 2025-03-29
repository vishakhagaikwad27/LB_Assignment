#include<stdio.h>
int CountEvenDigits(int num)
{
    int count = 0, digit;

    if(num < 0)
    {
        num = -num;                                             ///Convert Negative Number To Positive Number
    }

    while(num != 0)
    {
        digit = num % 10;                                       ///Extract Last Digit

        if(digit % 2 == 0)                                      ///Check if its Even
        {
            count++;
        }
        num /= 10;                                              ///Remove Last Digit
    }
    return count;
}

int main()
{
    int number;
    printf("\n Enter a Number = ");                               ///Accept Input From User
    scanf("%d",&number);

    printf("\n count of even digits = %d",CountEvenDigits(number));
    return 0;
}

#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("\n Enter a Character = ");
    scanf("%c",&ch);

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' )
    {
        printf("\n The Character '%c' is a Vowel.",ch);
    }
    else if((ch >= 'A' && ch <='Z') || (ch >= 'a' && ch <= 'z'))
    {
        printf("\n The Character '%c' is a Consonant.",ch);
    }
    else
    {
        printf("\n The Character '%c' is Other.",ch);
    }
    getch();
    return 0;
}

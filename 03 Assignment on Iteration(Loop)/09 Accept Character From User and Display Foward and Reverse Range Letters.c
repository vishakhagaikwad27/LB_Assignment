#include<stdio.h>
#include<conio.h>
void print_Characters(char ch)
{
if(ch >= 'A' && ch <= 'Z')
{
    for(char c=ch; c<='Z'; c++)
    {
        printf("\n %3c",c);
    }
    printf("\n");
}
   else if(ch>=a; ch<='z')
    {

        for(char c=ch; c>='a'; ch--)
        {
            printf("%3c",c);
        }
        printf("\n");
    }
    else
    {
        printf("\n INVALID.");
    }
}
int main()
{
   char ch='\0';
   printf("\n Enter a Character = ");
   scanf("%c",&ch);

   print_Characters(ch);
   return 0;

}

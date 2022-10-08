#include<stdio.h>
#include<conio.h>
void DecToOct(int dec);
int octnum[50];
static int i;
int main()
{
    int decnum;
    printf("Enter any Decimal number: ");
    scanf("%d", &decnum);
    DecToOct(decnum);
    printf("\nEquivalent Octal Value = ");
    for(i=(i-1); i>=0; i--)
        printf("%d", octnum[i]);
    getch();
}
void DecToOct(int dec)
{
    while(dec != 0)
    {
        octnum[i] = dec%8;
        i++;
        dec = dec/8;
    }
}
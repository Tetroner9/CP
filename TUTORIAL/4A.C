#include<stdio.h>
#include<conio.h>
void DecToBin(int dec);
int bin[50];
static int i;
int main()
{
    int decnum;
    printf("Enter any decimal number: ");
    scanf("%d", &decnum);
    DecToBin(decnum);
    printf("\nEquivalent Binary Value = ");
    for(i=(i-1); i>=0; i--)
        printf("%d", bin[i]);
    getch();
    return 0;
}
void DecToBin(int dec)
{
    while(dec!=0)
    {
        bin[i] = dec%2;
        i++;
        dec = dec/2;
    }
}
 #include<stdio.h>
#include<conio.h>
int main()
{
    int decnum, hexnum[50], temp, chck, i=0, rem;
    printf("Enter any Decimal number: ");
    scanf("%d", &decnum);
    while(decnum!=0)
    {
        temp = decnum/16;
        chck = temp*16;
        rem = decnum - chck;
        if(rem<10)
            rem = rem+48;
        else
            rem = rem+55;
        hexnum[i] = rem;
        i++;
        decnum = temp;
    }
    printf("\nEquivalent Hexadecimal Value = ");
    for(i=i-1; i>=0; i--)
        printf("%c", hexnum[i]);
    getch();
    return 0;
}
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,dec,rem,bin=0;
    printf("Enter decimal value:");
    scanf("%d",&dec);
    for(i=1;dec>0;i=i*10)
    {
        rem=dec%2;
        dec=dec/2;
        bin=bin+i*rem;
    }
    printf("\nBinary value is %d",bin);
    return 0;
}
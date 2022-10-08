#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k,a=1;
    for(i=1;i<=3;i++)
    {
        for(k=i;k<=3;k++)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("%d",a);
        }
        a=a+2;
        printf("\n");
    }
    a=3;
    for(i=2;i>=1;i--)
    {
        for(k=3;k>=i;k--)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("%d",a);
        }
        printf("\n");
        a=a-2;
    }
    return 0;
}
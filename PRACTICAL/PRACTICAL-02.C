#include<stdio.h>
#include<conio.h>
int main()
{
    int n,y,m,d,rem;
    printf("Enter no. of days\n");
    scanf("%d",&n);
    y=n/365;
    rem=n%365;
    m=rem/30;
    d=rem%30;
    printf("Years:%d\n Months:%d\n Days:%d\n",y,m,d);
    return 0;
}

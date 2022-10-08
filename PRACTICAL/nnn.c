#include<stdio.h>
int main()
{
int n,i,j,s;
printf("Enter number of lines=");
scanf("%d",&n);
s=n-1;
for(i=1;i<=n;i++)
{
for(j=1;j<=s;j++)
{
printf(" ");
}
for(j=1;j<=i;j++)
{
printf("*");
}
printf("\n");
s--;
}
return 0;
}

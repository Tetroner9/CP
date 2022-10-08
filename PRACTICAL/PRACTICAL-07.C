#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter two values");
    scanf("%d %d",&a,&b);
    while(a!=b)
    {
        if(a>b)
        a=a-b;
        else
        b=b-a;
    }
    printf("\nGCD of given values is %d",a);
    return 0;
}
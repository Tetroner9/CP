#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,x;
    printf("Enter values:");
    scanf("%d %d %d",&a,&b,&c);
    x=(a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("%d is largest",x);
    getch();
    return 0;
}

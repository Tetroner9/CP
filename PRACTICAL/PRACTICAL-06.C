#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d,x,ch;
    printf("Enter two values:\n");
    scanf("%d %d",&a,&b);
    printf("Enter your choice:\n 1.AND\n 2.OR\n 3.EX-OR\n 4.Negation\n 5.Left Shift\n 6.Right Shift\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        x=a&b;
        printf("AND=%d",x);
        break;

        case 2:
        x=a|b;
        printf("OR=%d",x);
        break;

        case 3:
        x=a^b;
        printf("EX-OR=%d",x);
        break;

        case 4:
        c=~a;
        d=~b;
        printf("NOT of a=%d\nNOT of b=%d",c,d);
        break;

        case 5:
        c=a<<2;
        d=b<<2;
        printf("Left Shift of a=%d\nLeft Shift of b=%d",c,d);
        break;

        case 6:
        c=a>>2;
        d=b>>2;
        printf("Right Shift of a=%d\nRight Shift of b=%d",c,d);
        break;

    }
    return 0;
}
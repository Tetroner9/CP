#include<stdio.h>
#include<conio.h>
int main()
{
    int a=10,b=10,c=10,d=10;
    
    printf("Original values of all variable is 10\n");
    b=a--;
    printf("b when decrement is %d\n",b);
    c=a++;
    printf("c when increment is %d\n",c);
    a=--c-c;
    printf("a when pre-decrement of c minus c is %d\n",a);
    d=-d;
    printf("d when putting negation is %d\n",d);
    return 0;
}
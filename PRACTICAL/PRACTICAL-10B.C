#include<stdio.h>
void swap(int *x, int *y)
{
    int c;
    c=(*x);
    (*x)=(*y);
    (*y)=c;
    printf("\nNumbers after swapping: \nNumber 1 = %d\nNumber 2 = %d",*x,*y);
}
int main()
{
    int a, b;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    printf("Numbers before swapping: \nNumber 1 = %d\nNumber 2 = %d",a,b);
    swap(&a,&b);
    return 0;
}
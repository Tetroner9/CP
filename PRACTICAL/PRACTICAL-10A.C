#include<stdio.h>
#include<conio.h>


int main()
{
    int a,b;
    void swap(int, int);
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    printf("Numbers before swapping: \nNumber 1 = %d\nNumber 2 = %d",a,b);
    swap(a,b);
    return 0;
}
void swap(int x,int y)
{
    int z;
    z=x;
    x=y;
    y=z;
    printf("\nNumbers after swapping: \nNumber 1 = %d\nNumber 2 = %d",x,y);
}
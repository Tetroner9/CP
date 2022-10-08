#include<stdio.h>
#include<conio.h>
int main()
{
    int numArray[10];
    int i,n,*ptr;
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("\nEnter Array Elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&numArray[i]);
    }
    ptr=&numArray[0];
    for(i=0;i<n;i++)
    {
        *ptr=*ptr+2;
        ptr++;
    }
    printf("\nModified Array is:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",numArray[i]);
    }
    return 0;
}
#include<stdio.h> 
#include<conio.h>
int main()
{
    int n1,reverse_n1;
    int reverse(int);

    printf("Enter a number: ");
    scanf("%d",&n1); 
    printf("\nBefore Reversal:%d ",n1); 
    reverse_n1=reverse(n1);   //sum
    printf("\n After Reversal:%d",reverse_n1); 
    return 0;
}
int sum=0,rem;
int reverse(int n1)
{
    if(n1>0)
{
        rem=n1%10;
        sum=sum*10+rem;
        reverse(n1/10);
}
    return(sum);
}

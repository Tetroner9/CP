#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k,arr[20],n,temp;
    printf("Enter no. of elements:");
    scanf("%d",&n);
    printf("\nEnter %d array elements",n);
    for(k=0;k<n;k++)
    {
        scanf("%d",&arr[k]);
    }
    for(j=0;j<n-1;j++)
    {
        for(i=0;i<n-j-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
    printf("\nArrays after comparing\t");
    for(k=0;k<n;k++)
    {
        printf("\t%d",arr[k]);
    }
    return 0;
}
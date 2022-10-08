#include<stdio.h>
#include<conio.h>
int main()
{
    char na[10], rev[10];
    int len=0,i,j=0,f=0;
    printf("Enter A string:");
    gets(na);
    for(i=0;na[i]!=NULL;i++)
    {
        len=len+1;
    }
    for(i=len-1;i>=0;i--)
    {
        rev[j++]=na[i];
    }
    rev[j++]=NULL;
    for(i=0;i<=len;i++)
    {
        if (na[i]!=rev[i])
        {
            f=i;
            break;
        }
        if(f==1)
            printf("%s is aPalindrome",na);
        else
            printf("%s is not a Palindrome",na);
    }
    return 0;
}
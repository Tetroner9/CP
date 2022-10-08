#include<stdio.h>
int main()
{
    char s[20];
    int i=0,flag=0,len=0;
    printf("Enter a string:\n");
    fgets(s,sizeof(s),stdin);
    while (s[i]!='\0')
    {
        len++;
        i++;
    }
    for (i=0;i<len-1;i++)
    { 
        if(s[i]>='\0')
        {
            s[i]=s[i]-32;
        }
    }
    for(i=0;i<(len-1)/2;i++)
    {
        if(s[i]!=s[len-i-2])
        {
            flag=i;
            break;
        }
    }
    if (flag==1)
    {
        printf("Given string is not a Palindrome.\n");
    }
    else{
        printf("Given string is a Palindrome.\n");
    }
    return 0;
}
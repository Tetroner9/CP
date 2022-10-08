#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int i,str1_len,str2_len;
    char str1[20],str2[20],str_cpy[20];
    printf("Enter your 1st string:\n");
    scanf("%s",str1);
    printf("Enter your 2nd string:\n");
    scanf("%s",str2);
    str1_len=strlen(str1);
    str2_len=strlen(str2);
    for(i=0;i<=str1_len;i++)
    {
        str_cpy[i]=str1[i];
    }
    printf("\nCopy of string is:%s",str_cpy);
    for(i=0;i<=str2_len;i++)
    {
        str1[str1_len+i]=str2[i];
    }
    printf("\nConcatenate of string is:%s",str1);
    return 0;
}
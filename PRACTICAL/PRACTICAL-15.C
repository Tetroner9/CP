#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int i,v=0,c=0,l=0,u=0;
    char str[100];
    printf("\nEnter a string:  ");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U')
        {
            v++;
        }
        else if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z')
        {
            c++;
        }
        if(str[i]>='A'&&str[i]<='Z')
        {
            u++;
        }
        if(str[i]>='a'&&str[i]<='z')
        {
            l++;
        }

    }
    printf("\nThere are %d vowels in the string.",v);
    printf("\nThere are %d consonants in the string.",c);
    printf("\nThere are %d uppercase letters in the string.",u);
    printf("\nThere are %d lowercase letters in the string.",l);
    return 0;
}
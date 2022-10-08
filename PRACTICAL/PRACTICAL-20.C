#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
 int i,n,*data;
 
 printf("\nEnter the total nummber of elements:  ");
 scanf("%i",&n);
 //Allocating memory for n elements
 data=(int*)calloc(n,sizeof(int));
 if(data==NULL)
 {
    printf("\nError!! Memory not allocated");
    exit(0);
 }
 //Storing numbers entered by the user
 for(i=0;i<n;++i)
 {
    printf("\nEnter number %d:  ",i+1);
    scanf("%i",data+i);
 }
 //Finding the smallest numbers
 for(i=1;i<n;++i)
 {
    if(*data>*(data+i))
    {
        *data=*(data+i);
    }
 }
 printf("\nSmallest number = %i",*data);
 free(data);
 getch();
 return 0;
}


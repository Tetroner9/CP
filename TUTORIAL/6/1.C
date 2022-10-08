#include<stdio.h>
#include<conio.h>
struct h
{
    char name[100];
    char add[100];
    int chr;
    int room;
};
void hotel();
struct h s[]={
    {"Tridant Nariman Point","South Mumbai",4500,35},
    {"Santacruz Hotel","Santacruz",3000,43},
    {"Rajavir Palace & Resort","Mumbai",3500,15},
    {"Raju Hotel","Rajasthan",2000,23}
};
int main()
{
    int i;
    char c;
    for(i=0;i<=3;++i)
    {
        printf("\nHOTEL NAME:%s",s[i].name);
        printf("\nADDRESH:%s",s[i].add);
        printf("\nCHARGES:%d",s[i].chr);
        printf("\nNO.OF ROOM:%d",s[i].room);
    }
    hotel();
    return 0;



}
void hotel()
{
    int i,k;
    char c;
    printf("\nSHOW HOTEL ROOM CHRGES LEE THAN:");
    scanf("%d",k);
    for(i=0;i<=3;++i)     
    {
        if(s[i].chr<=k)
        {
            printf("\n %d.HOTEL NAME:%s",i+1,s[i].name);
            printf("\nADDRESH:%s",s[i].add);
            printf("\nCHARGES:%d",s[i].chr);
            printf("\nNO.OF ROOM:%d",s[i].room);
        }
    }  
}





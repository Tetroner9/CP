#include<stdio.h>
#include<conio.h>
struct medicalrecord
{
    char name[20];
    char disease[20];
    char bloodgrp[15];
    char DOB[10];
    int age;
};
int main()
{
    struct medicalrecord p1;
    
    printf("\nEnter name of the patient:  ");
    scanf("%s",p1.name);
    printf("\nEnter age:  ");
    scanf("%d",&p1.age);
    printf("\nEnter date of birth:  ");
    scanf("%s",p1.DOB);
    printf("\nEnter blood group:  ");
    scanf("%s",p1.bloodgrp);
    printf("\nEnter disease:  ");                                 
    scanf("%s",p1.disease);
    printf("\n\n\tMEDICAL RECORD");
    printf("\nName of the patient: %s",p1.name);
    printf("\nAge of the patient: %d",p1.age);
    printf("\nDate of birth of the patient: %s",p1.DOB);
    printf("\nBlood group of the patient: %s",p1.bloodgrp);
    printf("\nDisease patient is suffering from: %s",p1.disease);
    return 0;
}
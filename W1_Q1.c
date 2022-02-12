#include<stdio.h>

void main()
{
    char name[20], branch[20], hobbies[50];
    int regd;
    printf("Enter your Name:");
    scanf("%s",name);
    printf("Enter your Registration Number:");
    scanf("%d",&regd);
    printf("Enter your Branch:");
    scanf("%s",branch);
    printf("Enter your Hobbies:");
    scanf("%s",hobbies);
    printf("Name=%s",name);
    printf("\nRegistration Number=%d",regd);
    printf("\nBranch=%s",branch);
    printf("\nHobbies=%s",hobbies);
}
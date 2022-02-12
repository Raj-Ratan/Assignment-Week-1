#include<stdio.h>

int main()
{
    int n,ch;
    printf("Enter your number");
    scanf("%d",&n);
    printf("Choice 1: To check whether the number is even");
    printf("Choice 2: To check whether the number is odd");
    printf("Enter your choice:");
    scanf("%d",&ch);
    switch (ch)
    {

        case 1:
            if(n%2==0)
            {
                printf("It is an even number");
            }
            break;
        case 2:
            if(n%2!=0)
            {
                printf("It is an odd number");
            }
            break;
    
        default:
            printf("Enter the choice 1 or 2");
            break;
    }

    return 0;
}
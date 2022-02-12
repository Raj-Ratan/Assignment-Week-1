#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter your first value");
    scanf("%d",&a);
    printf("Enter your second value");
    scanf("%d",&b);
    if(a>b)
    {
        printf("%d is greater than %d",a,b);
    }
    else{
        printf("%d is greater than %d",b,a);
    }

    return 0;
}
#include<stdio.h>

int main()
{
    int a,b,ch,sum,sub,multi,div;
    printf("Enter your first number:");
    scanf("%d",&a);
    printf("Enter your second number:");
    scanf("%d",&b);
    printf("Choice 1: Adittion");
    printf("\nChoice 2: Subtraction");
    printf("\nChoice 3: Multiplication");
    printf("\nChoice 4: Division");
    printf("\nEnter your choice:");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:
        {
            sum=a+b;
            printf("Sum of the two values:%d",sum);
        }
        break;

        case 2:
        {
            if(a>b)
            {
                sub=a-b;
                printf("Difference:%d",sub);
            }
            else
            {
                sub=b-a;
                printf("Difference:%d",sub);
            }
            break;
        }

        case 3:
        {
            {
                multi=a*b;
                printf("Product:%d",multi);
            }
        break;
        }

        case 4:
        {
            div=a/b;
            printf("Quotient:%d",div);
        }
        break;

        default:
        {
            printf("Enter choice 1,2,3 or 4");
        }
        break;
    }


    return 0;
}

#include<stdio.h>

int main()
{
    int r,dia,circum,area;
    printf("Enter the radius of the circle:");
    scanf("%d",&r);
    dia=r*2;
    circum=2*(22/7)*r;
    area=(22/7)*r*r;
    printf("Diameter of the circle:%d",dia);
    printf("\nCircumference of the circle:%d",circum);
    printf("\nArea of the circle:%d",area);

    return 0;
}
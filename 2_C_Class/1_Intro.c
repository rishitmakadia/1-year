#include<stdio.h>
int main()
{
    // Basics
    // printf("Hello World!!!\n");
    // float l = 3, b = 5, area;
    // area = l * b;
    // printf("%f", area);

    // Basics_Area
    // int l, b;
    // printf("Enter l and b:\n");
    // scanf("%d%d", &l, &b);
    // float area = l * b;
    // printf("Area = %f", area);

    // Area of Circle
    int radius;
    float area;
    float pi = 3.14;
    printf("Enter value of Radius:\n");
    scanf("%d", &radius);
    area = radius * radius * pi;
    printf("Area = %f\n", area);
    
    return 0;
}


#include<stdio.h>
#include<math.h>

// ax^2+bx+c
// disc = b^2-4ac
int main()
{
    //Develop a C program to find all possible roots of a quadratic equation.
    float a, b, c, disc,root1, root2, real, img;
    printf("Enter the value of a,b,c:\n");
    scanf("%f%f%f", &a, &b, &c);
    disc = (b * b) - (4 * a * c);
    if (disc==0)
    {   
        printf("Roots are equal\n");
        root1 = root2 = (-b) / (2 * a);
        printf("root1=%f\nroot2=%f", root1, root2);
        // printf("x1=x2= %f", -b / (2 * a));
    }
    else if (disc > 0)
    {
        printf("Real and distinct roots\n");
        root1 = -b + sqrt(fabs(disc)) / (2 * a);
        root2 = -b - sqrt(fabs(disc)) / (2 * a);
        printf("root1=%f\nroot2=%f", root1, root2);
    }    
    else if (disc < 0)
    {
        real = -b / (2*a);
        img = sqrt(fabs(disc))/(2*a);
        printf("Complex Roots= %f+i(%f)", real, img);
        printf("Complex Roots= %f-i(%f)", real, img);
    }
    
    return 0;
}
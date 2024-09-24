#include<stdio.h>
#include<math.h>

int main()
{
    float x1, y1, x2, y2, dist;
    printf("Enter the first co-ordinates:\n");
    scanf("%f%f", &x1, &y1);
    printf("Enter the second co-ordinates:\n");
    scanf("%f%f", &x2, &y2);
    // dist = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) *(y2 - y1)));
    dist = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    printf("Distance between two points is = %.2f", dist);
}

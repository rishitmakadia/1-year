#include <stdio.h>

int main()
{
    int num, a=0,b=1,c;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Fibonacci series: ");
    for(int i=1;i<=num;i++)
    {
        c=a+b;
        printf("\t%d",a);
        a=b;
        b=c;
    }
    return 0;
}
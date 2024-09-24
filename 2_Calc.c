#include<stdio.h>

int main()
{
    char op;
    int num1, num2;
    printf("Enter the first number:\n");
    scanf("%d", &num1);   
    printf("Enter the second number:\n");
    scanf("%d", &num2);   
    printf("Enter the operation {+, -, /, *}:\n");
    scanf(" %c", &op);   //Space before %c is very imp
    switch(op)
    {
        case '+':
            printf("%d", num1 + num2);
            break;
        case '-':
            printf("%d", num1 - num2);
            break;
        case '*':
            printf("%d", num1 * num2);
            break;
        case '/':
            if (num2==0)
                printf("Denominator is Zero");
            else
                // (float)result = (float)num1 / (float)num2;
                printf("%.3f", (float)(num1/num2));
                break;
        default:
            printf("Invalid Operation");
            break;
    }
    return 0;
}

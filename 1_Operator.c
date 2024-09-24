# include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the first value= \n");
    scanf("%d", &a);
    printf("Enter the second value= \n");
    scanf("%d", &b);

    // Arithmetic Operator
    printf("Addition = %d \n", a + b);
    printf("Substraction = %d \n", a - b);
    printf("Multiplication = %d \n", a * b);
    printf("Quotient = %.1f \n", (float)(a / b));
    printf("Remainder = %.3f \n", (float)(a % b));
    printf("+a = %d \n", +a);
    printf("-b = %d \n", -b);
    printf("a++ = %d \n", a++);
    printf("a-- = %d \n", a--);
    printf("++a = %d \n", ++a);
    printf("--a = %d \n", --a);

    // Relational and Equality Operator
    printf("a>b = %d\n", a > b);
    printf("a<b = %d\n", a < b);
    printf("a>=b = %d\n", a >= b);
    printf("a<=b = %d\n", a <= b);
    printf("a==b = %d\n", a == b);
    printf("a!=b = %d\n", a != b);

    // Logical Operator
    printf("a>5 and b>5 = %d\n", (a > 5) && (b > 5));
    printf("a>5 or b>5 = %d\n", (a > 5) || (b > 5));
    printf("not of b = %d\n", !b);

    // Bitwise Operator
    printf("Bitwise AND(&) = %d\n", a & b);
    printf("Bitwise OR(|) = %d\n", a | b);
    printf("Bitwise XOR(^) = %d\n", a ^ b);
    printf("Shift Left(<<) = %d\n", a << 1);
    printf("Shift Right(>>) = %d\n", b >> 1);
    return 0;
}
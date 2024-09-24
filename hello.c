#include<stdio.h>

int main() {
    // int day;
    char c;
    printf("Enter a number (1-7): ");
    // scanf("%d", &day);
    scanf("%c", &c);

    // switch (day) 
    switch (c) 
    {
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
            printf("Weekday\n");
            break;
        case '6':
        case '7':
            printf("Weekend\n");
            break;
        default:
            printf("Invalid input\n");
            break;
    }

    return 0;
}


// int main() 
// {
//     int day;

//     printf("Enter a number (1-7): ");
//     scanf("%d", &day);

//     if (day >= 1 && day <= 5) 
//     {
//         printf("Weekday\n");
//     } 
//     else if (day == 6 || day == 7) 
//     {
//         printf("Weekend\n");
//     } 
//     else 
//     {
//         printf("Invalid input\n");
//     }

//     return 0;
// }
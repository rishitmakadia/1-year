#include<stdio.h>
int main()

    // Write a program in C to calculate and print the electricity bill of a given customer. The coustomer ID, name, and unit consumed by the user should be captured from the keyboard to display the total amount to be paid to the coustomer. 
    // The charges are aas follow:
    // If bill exceeds Rs. 400 then a surcharge 15% will be charged and the minumum bill should be of Rs.100/-
    
{
    char name[5];
    int id;
    float unit, bill_amount;
    printf("Enter your customer ID:\n");
    scanf("%d", &id);
    printf("Enter your name:");
    scanf(" %s", name);
    printf("Enter the number of unit consumed:\n");
    scanf("%f", &unit);

    if (unit<200)
        bill_amount = 1.20 * unit + 100;
    else if (unit<400 && unit>=200)
        bill_amount = 1.50 * unit + 100;
    else if (unit<600 && unit>=400)
        bill_amount = 1.80 * unit + 100;
    else 
        bill_amount = 2.00 * unit + 100;

    if (bill_amount>400)
        printf("Total Bill=%.2f\n", bill_amount+bill_amount*0.15);
    else
        printf("Total Bill=%.2f\n", bill_amount);

    return 0;
}
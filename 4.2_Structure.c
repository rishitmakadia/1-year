#include<stdio.h>
//Create a structure name,age, and total marks. two students
struct book
{
    char name[50];
    int id;
    float price;
};

struct std_dob
{
    int day,month, year;
};
struct emp_dob
{
    int day,month, year;
};
struct student
{
    int id;
    char name[50];
    float t_marks;
    struct std_dob dob;
};

struct emp_add
{
    char city[15], state[15], country[15];
};
struct employee
{
    char name[30];
    int id;
    float salary;
    struct emp_dob dob;
    struct emp_add add;
};

int main()
{
    // Input and Printing a Structure Members
    // struct book b1, b2;
    // printf("Enter name of Book 1 = ");
    // scanf("%s", b1.name);
    // printf("Enter ID of Book 1 = ");
    // scanf("%d", &b1.id);
    // printf("Enter price of Book 1 = ");
    // scanf("%f", &b1.price);
    // printf("\n");
    // printf("Enter name of Book 2 = ");
    // scanf("%s", b2.name);
    // printf("Enter ID of Book 2 = ");
    // scanf("%d", &b2.id);
    // printf("Enter price of Book 2 = ");
    // scanf("%f", &b2.price);
    // printf("---\n");
    // printf("Book 1 Name = %s\n", b1.name);
    // printf("Book 1 ID = %d\n", b1.id);
    // printf("Book 1 Price = %.2f\n", b1.price);
    // printf("\n");
    // printf("Book 2 Name = %s\n", b2.name);
    // printf("Book 2 ID = %d\n", b2.id);
    // printf("Book 2 Price = %.2f\n", b2.price);

    //Array in a Structure
    // int n, i;
    // printf("Enter the No. of Book : ");
    // scanf("%d", &n);
    // struct book barr[n];
    // for (i = 0; i < n;i++)
    // {
    //     printf("Enter name of Book %d = ", i+1);
    //     scanf("%s", barr[i].name);
    //     printf("Enter ID of Book %d = ", i+1);
    //     scanf("%d", &barr[i].id);
    //     printf("Enter price of Book %d = ", i+1);
    //     scanf("%f", &barr[i].price);
    // }
    // for (i = 0; i < n;i++)
    // {
    //     printf("Book %d Name = %s\n",(i+1), barr[i].name);
    //     printf("Book %d ID = %d\n",(i+1), barr[i].id);
    //     printf("Book %d Price = %.2f\n",(i+1), barr[i].price);
    // }

    //Design a C program to read and display 10 students information with details including Student ID, Name, and DOB using array of structures and nested structure concept.
    // int i,n;
    // printf("Enter the No. of Students: ");
    // scanf("%d", &n);
    // struct student stud[n];
    // printf("Enter the details of Students\n");
    // for (i = 0; i < n; i++)
    // {
    //     printf("Student = %d\n", (i + 1));
    //     printf("NAME : ");
    //     scanf("%s", stud[i].name);
    //     printf("ID : ");
    //     scanf("%d", &stud[i].id);
    //     printf("DOB : ");
    //     scanf("%d%d%d", &stud[i].dob.day, &stud[i].dob.month, &stud[i].dob.year);
    // }
    // printf("\nStudent Details");
    // for (i = 0; i < n; i++)
    // {
    //     printf("\n\nNAME = %s", stud[i].name);
    //     printf("\nID = %d", stud[i].id);
    //     printf("\nDOB = %d | %d | %d", stud[i].dob.day, stud[i].dob.month, stud[i].dob.year);
    // }

    // Write a C program to store the employee details for N empoyees which includes Employee ID, name, salary and address. Store address details as a nested structure.
    // int i,n;
    // printf("Enter the No. of Employees: ");
    // scanf("%d", &n);
    // struct employee emp[n];
    // printf("Enter the details of Employee\n");
    // for (i = 0; i < n; i++)
    // {
    //     printf("Employee = %d\n", (i + 1));
    //     printf("NAME : ");
    //     scanf("%s", emp[i].name);
    //     printf("ID : ");
    //     scanf("%d", &emp[i].id);
    //     printf("Salary : ");
    //     scanf("%f", &emp[i].salary);
    //     printf("Address : ");
    //     scanf("%s%s%s", emp[i].add.city, emp[i].add.state, emp[i].add.country);
    // }
    // printf("\nEmployee Details");
    // for (i = 0; i < n; i++)
    // {
    //     printf("\n\nNAME = %s", emp[i].name);
    //     printf("\nID = %d", emp[i].id);
    //     printf("\nSalary = %.2f", emp[i].salary);
    //     printf("\nAddress = %s, %s, %s", emp[i].add.city, emp[i].add.state, emp[i].add.country);
    // }


    //Lab Program-5B)
    // int i,n;
    // float sum = 0;
    // printf("Enter the No. of Employees: ");
    // scanf("%d", &n);
    // struct employee emp[n];
    // printf("Enter the details of Employee\n");
    // for (i = 0; i < n; i++)
    // {
    //     printf("Employee = %d\n", (i + 1));
    //     printf("NAME : ");
    //     scanf("%s", emp[i].name);
    //     printf("ID : ");
    //     scanf("%d", &emp[i].id);
    //     printf("Salary : ");
    //     scanf("%f", &emp[i].salary);
    //     printf("Date Of Birth : ");
    //     scanf("%d%d%d", &emp[i].dob.day, &emp[i].dob.month, &emp[i].dob.year);
    // }
    // printf("\nEmployee Details");
    // for (i = 0; i < n; i++)
    // {
    //     printf("\n\nNAME = %s", emp[i].name);
    //     printf("\nID = %d", emp[i].id);
    //     printf("\nSalary = %.2f", emp[i].salary);
    //     printf("\nDOB = %d/%d/%d", emp[i].dob.day, emp[i].dob.month, emp[i].dob.year);
    //     sum = sum + emp[i].salary;
    // }
    // printf("\nAverage Salary = %.1f", (sum / n));
}
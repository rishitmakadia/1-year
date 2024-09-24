#include<stdio.h>
// #include<string.h>

int compare(char a[], char b[])
{
    int flag = 0, i = 0;
    while (a[i]!='\0' || b[i]!='\0')
    {
        if (a[i]==b[i])
        {
            flag++;
            i++;
        }
        else
        {
            return -1;
            break;
        }
    }
    return 0;
}
int str_len (char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        // count++;
        i++;
    }
    return i;
}
void cancat_str(char str1[], char str2[])
{
    int i = 0, j = 0;
    while (str1[i]!='\0')
        i++;
    while (str2[j]!='\0')
    {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i]='\0'; 
    printf("Cancatenation = %s\n", str1);

}
int main()
{

    // // char sample[3];
    // // char sample[13] = "New York"; // Single comma error
    // // char sample[] = "New York";  //Single comma error
    // // scanf("%2s", sample);
    // // gets(sample);
    // // printf("%s", sample);
    // char smp[5];
    // int i = 0;
    // while((smp[i]=getchar())!='\n')
    //     i++;
    // printf("%s", smp);

    //C Program to find the length of the string
    // char str[100];
    // int i, length = 0;
    // printf("Enter a String: ");
    // // gets(str);
    // scanf("%s", str);
    // for (i = 0; str[i] != '\0'; i++)
    // {
    //     length++;
    // }
    // printf("Length of String = %d", length);


    //C Program to find the cancatenate two string
    // char str1[100], str2[100];
    // printf("Enter a String 1: ");
    // gets(str1);
    // printf("Enter a String 2: ");
    // gets(str2);
    // int i = 0, j = 0;
    // while (str1[i]!='\0')
    //     i++;
    // while (str2[j]!='\0')
    // {
    //     str1[i] = str2[j];
    //     i++;
    //     j++;
    // }
    // str1[i]='\0';
    // printf("Cancatenation = %s", str1);


    //String Upper Case
    // char str[100];
    // int i;
    // printf("Enter a String: ");
    // gets(str);
    // for (i = 0; str[i] != '\0';i++)
    // {
    //     if (str[i]>='a' && str[i]<='z')
    //     {
    //         str[i] = str[i] - 32;
    //     }
    // }
    // printf("String in Upper case = %s", str);
    // printf("\n%d", str[2]-5);
    // // printf("\n%c", str[2]-5);

    //String compare (function)
    // char str1[100], str2[100];
    // int cmp;
    // printf("Enter a String 1: ");
    // gets(str1);
    // printf("Enter a String 2: ");
    // gets(str2);
    // cmp = compare(str1, str2);
    // if (cmp==0)
    //     printf("Strings are same");
    // else
    //     printf("Strings are different");

    //Program to copy string from another string
    // char str1[100], str2[100];
    // int i;
    // printf("Enter a String 1: ");
    // gets(str1);
    // for (i = 0; str1[i] != '\0';i++)
    // {
    //     str2[i] = str1[i];
    // }
    // puts(str2);
    // printf("%s", str2);

    // Find vowels and consonant
    // char str[100];
    // int i, vowel=0, cons=0;
    // printf("Enter a String: ");
    // gets(str);
    // for (i = 0; str[i] != '\0';i++)
    // {
    //     if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
    //     {
    //         vowel++;
    //     }
    //     else 
    //     {
    //         cons++;
    //     }
    // }
    //     printf("No. of vowels = %d\n", vowel);
    //     printf("No. of consonant = %d", cons);


    //Lab-3) Write functions to implement String operations such as cancatenation and String length without using built-in function (2 functions)

    // char str1[100], str2[100];
    // printf("Enter a String 1: ");
    // gets(str1);
    // printf("Enter a String 2: ");
    // gets(str2);
    // int original = str_len(str1);
    // cancat_str(str1, str2);
    // printf("Lenth of String 1 = %d\n", original);
    // printf("Lenth of String 2 = %d\n", str_len(str2));
    // printf("Lenth of Cancatenated String = %d\n", str_len(str1));

    // char name[20];
    // int i=0;
    // while((name[i]=getchar())!='\n')
    // i++;
    // printf("%s", name);

    // int i;
    // char name[6] = "paris";
    // for(i=0;i<6;i++)
    //     putchar(name[i]);
    // putchar('\n');

    return 0;
}
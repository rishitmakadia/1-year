#include<stdio.h>
int main()
{
    //Write a program in C to insert an element into an unsorted array 
    // int arr[10], i, n, insert, pos;
    // printf("No of elements in an array: ");
    // scanf("%d", &n);
    // printf("Enter the array element: ");
    // for (i = 0; i < n;i++)
    // {
    //     scanf("%d", &arr[i]);
    // }
    // printf("The elements in the array are :   ");
    // for (i = 0; i < n;i++)
    // {
    //     printf("%d\t", arr[i]);
    // }
    // printf("\nEnter the element to be inserted: ");
    // scanf("%d", &insert);
    // printf("Enter the position : ");
    // scanf("%d", &pos);
    // for (i = n; i >= pos;i--)
    // {
    //     arr[i] = arr[i - 1];
    // }
    // arr[pos - 1] = insert;
    // printf("The elements in the new array are :   ");
    // for (i = 0; i < (n+1);i++)
    // {
    //     printf("\t%d", arr[i]);
    // }

    //Write a program in C to insert an element into an sorted array 
    // int arr[10], i, n, insert, pos;
    // printf("No. of elements in an array: ");
    // scanf("%d", &n);
    // printf("Enter the array element: ");
    // for (i = 0; i < n;i++)
    // {
    //     scanf("%d", &arr[i]);
    // }
    // // printf("The elements in the array are :   ");
    // // for (i = 0; i < n;i++)
    // // {
    // //     printf("%d\t", arr[i]);
    // // }
    // printf("\nEnter the element to be inserted: ");
    // scanf("%d", &insert);
    // for (i = 0; i < n;i++)
    // {
    //     if (insert<arr[i])
    //     {
    //         pos = i+1;
    //         // pos = i;
    //         break;
    //     }
    //     else
    //     {
    //         pos = i + 1;
    //     }
    // }
    // for (i = n; i >= pos;i--)
    // {
    //     arr[i] = arr[i - 1];
    // }
    // arr[pos - 1] = insert;
    // // for (i = n; i >= pos;i--)
    // // {
    // //     arr[i] = arr[i - 1];
    // // }
    // // arr[pos] = insert;
    // printf("The elements in the new array are :   ");
    // for (i = 0; i < (n+1);i++)
    // {
    //     printf("\t%d", arr[i]);
    // }


    // Write a program in C to delete an element/position into an sorted array 
    // int arr[10], i, n, del, posi,j;
    // printf("No of elements in an array: ");
    // scanf("%d", &n);
    // printf("Enter the array element: ");
    // for (i = 0; i < n;i++)
    // {
    //     scanf("%d", &arr[i]);
    // }
    // // printf("The elements in the array are :   ");
    // // for (i = 0; i < n;i++)
    // // {
    // //     printf("%d\t", arr[i]);
    // // }
    // printf("\nEnter the element to be deleted: ");
    // scanf("%d", &del);
    // for (i = 0; i < n;i++)
    // {
    //     if (del==arr[i])
    //     {
    //         posi = i+1;
    //         break;
    //     }
    //     else
    //     {
    //         posi = i + 1;
    //     }
    // }
    // for (j = posi; j <(n);j++)
    // {
    //     arr[j-1] = arr[j];
    // }
    // printf("The elements in the new array are :   ");
    // for (i = 0; i < (n-1);i++)
    // {
    //     printf("%d\t", arr[i]);
    // }


    // Linear Search (3_Function_Array.c)
    // int arr[10], i, n, key, found=1, posi;
    // printf("No of elements in an array: ");
    // scanf("%d", &n);
    // printf("Enter the array element: ");
    // for (i = 0; i < n;i++)
    // {
    //     scanf("%d", &arr[i]);
    // }
    // // printf("The elements in the array are :   ");
    // // for (i = 0; i < n;i++)
    // // {
    // //     printf("%d\t", arr[i]);
    // // }
    // printf("\nEnter the key: ");
    // scanf("%d", &key);
    // for (i = 0; i < n;i++)
    // {
    //     if (key==arr[i])
    //     {
    //         posi = i+1;
    //         found = 0;
    //         break;
    //     }
    // }
    // if (found==1)
    //     printf("Element Not found");
    // else
    //     printf("Element is found at position %d", (posi));


    //Binary Search
    // int arr[10], i, n, key, low, high, posi, mid, found =1;
    // printf("No of elements in an array: ");
    // scanf("%d", &n);
    // printf("Enter the array element: ");
    // for (i = 0; i < n;i++)
    // {
    //     scanf("%d", &arr[i]);
    // }
    // // printf("The elements in the array are :   ");
    // // for (i = 0; i < n;i++)
    // // {
    // //     printf("%d\t", arr[i]);
    // // }
    // printf("\nEnter the element: ");
    // scanf("%d", &key);
    // low = 0;
    // high = n-1;
    // while (low<high)
    // {
    //     mid = (low + high) / 2;
    //     if (key == arr[mid])
    //     {
    //         found = 0;
    //         posi = mid;
    //         break;
    //     }
    //     else if (key<=arr[mid])
    //     {
    //         mid = (low + mid) / 2;
    //         // high = mid - 1;
    //     }
    //     else if (key>=arr[mid])
    //     {
    //         mid = (high + mid) / 2;
    //         // low = mid + 1;
    //     }
    // }
    // if (found==1)
    //     printf("Element Not found");
    // else
    //     printf("Element is found at position %d", (posi+1));

    return 0;
}
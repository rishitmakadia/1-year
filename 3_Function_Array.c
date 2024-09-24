#include<stdio.h>

// int linear_search(int a[] ,int n, int key)
// {
//     int i;
//     for (i = 0; i < n; i++)
//     {
//         if(key==a[i])
//         {
//             return i;
//             break;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     int pos,n,i, key;
//     printf("Enter the length of an array : ");
//     scanf("%d", &n);
//     int arr[n];
//     for (i = 0; i < n;i++)
//     {
//         printf("%d element = ", (i + 1));
//         // gets(arr[i]);
//         scanf("%d", &arr[i]);
//     }
//     printf("Enter the element to be searched : ");
//     scanf("%d", &key);
//     pos = linear_search(arr, n, key);
//     if (pos==(-1))
//         printf("Element Not found");
//     else
//         printf("Element is found at position %d", (pos+1));
// }


// int binary_search(int array[], int x, int low, int high)
// {
//     while (low<high)
//     {
//         int mid = (low + high) / 2;
//         if (array[mid]==x)
//         {
//             return mid;
//             break;
//         }
//         else if (array[mid] < x)
//             low = mid + 1;
//         else
//             high = mid - 1;
//     }
//     return -1;
// }

// int main()
// {
//     int position,x,n,i;
//     printf("Enter the no. of book in the book shelf: ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter the book ID's in the book shelf: ");
//     for (i = 0; i < n;i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     // printf("\nBook ID's : ");
//     // for (i = 0; i < n;i++)
//     // {
//     //     printf("%d\t", arr[i]);
//     // }
//     printf("\nEnter the book ID to be searched :   ");
//     scanf("%d", &x);
//     // int low = 0, high = n - 1;
//     position = binary_search(arr, x, 0, n-1);
//     if (position == -1)
//         printf("Not found");
//     else
//         printf("Book found at %d", (position+1));
    
    return 0;
}
#include <stdio.h>

int isIdentityMatrix(int matrix[3][3]) 
{
    for(int i = 0; i < 3; i++) 
    {    
        for(int j = 0; j < 3; j++) 
        {
            if(i == j) 
            {
                if(matrix[i][j]!= 1) 
                {
                    return 0; // not an identity matrix
                }
            } 
        }
    }
    return 1; // is an identity matrix
}

int main() 
{
    int matrix[3][3] = {{1, 2, 0},{0, 1, 0},{0, 0, 1}};

    if(isIdentityMatrix(matrix)==1) 
    {
        printf("The matrix is an identity matrix.\n");
    } 
    else 
    {
        printf("The matrix is not an identity matrix.\n");
    }
    return 0;
}
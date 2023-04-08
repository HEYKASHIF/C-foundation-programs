//C program to add two matrix.
#include<stdio.h>
#include<string.h>
int main()
{
    int size_of_row, size_of_coloumn;
    printf("Enter the size of row and colomn of the 2D array = ");
    scanf("%d%d",&size_of_row ,&size_of_coloumn);
    int matrix1[size_of_row][size_of_coloumn];
    int matrix2[size_of_row][size_of_coloumn];
    int added_matrix[size_of_row][size_of_coloumn];

//inputing of matrix1.
    for(int i=0 ; i<size_of_row ; i++)
    {
        for(int j=0 ; j<size_of_coloumn ; j++)
        {
            scanf("%d",&matrix1[i][j]);
        }
    }

//inputing of matrix2.    
    for(int i=0 ; i<size_of_row ; i++)
    {
        for(int j=0 ; j<size_of_coloumn ; j++)
        {
            scanf("%d",&matrix2[i][j]);
        }
    }
    
//adding of both matrices.
    for(int i=0 ; i<size_of_row ; i++)
    {
        for(int j=0 ; j<size_of_coloumn ; j++)
        {
            added_matrix[i][j] = (matrix1[i][j]+matrix2[i][j]);
        }
    }
    
//printing the matrix after addition.
    for(int i=0 ; i<size_of_row ; i++)
    {
        for(int j=0 ; j<size_of_coloumn ; j++)
        {
            printf("%d ",added_matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int size;
    printf("Please, Enter the Size of the Row or Column to create square Mtarix = ");
    scanf("%d",&size);
    
//for creating Matrix1.
    int Mat1[size][size];
    printf("its time for MATRIX 1.\n");
    for(int i=0 ; i<size ; i++)
    {
        for(int j=0 ; j<size ; j++)
        {
            printf("please enter %dth element of %dth row = ",j,i);
            scanf("%d",&Mat1[i][j]);
        }
    }
    
//for creating Matrix2.
    int Mat2[size][size];
    printf("its time for MATRIX 2.\n");
    for(int i=0 ; i<size ; i++)
    {
        for(int j=0 ; j<size ; j++)
        {
            printf("please enter %dth element of %dth row = ",j,i);
            scanf("%d",&Mat2[i][j]);
        }
    }
    
//for calculation between Matrix1 & Matrix2.
    int Mat_final[size][size];
    int temp=0;
    for(int i=0 ; i<size ; i++)
    {
        for(int j=0 ; j<size ; j++)
        {
            for(int k=0;k<size;k++){
                temp += Mat1[i][k] * Mat2[k][j];
            }
            Mat_final[i][j] = temp;
            temp=0;
        }
    }

//for printing the Final Matrix.
    for(int i=0 ; i<size ; i++)
    {
        for(int j=0 ; j<size ; j++)
        {
            printf("%d ",Mat_final[i][j]);
        }
        printf("\n");
    }













    
}
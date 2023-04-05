#include<stdio.h>
int maxValue(int A[], int size);
float avg(int A[], int size);
int sum(int A[], int size);
int main()
{
    int a[10],i,great,add;
    float avr;
    printf("Enter 10 numbers = ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    great=maxValue(a,10);
    printf("\ngreatest number = %d\n", great);
    avr=avg(a,10);
    printf("Average value = %f\n",avr);
    add=sum(a,10);
    printf("Sum = %d",add);
    return 0;

    
    
}

int maxValue(int A[], int size)
{
    int i,temp;
    for(i=0;i<size;i++)
    {
        if(A[0]<A[i])
        {
          //temp=A[i+1];
          A[0]=A[i];
          //A[i]=temp;
        }
    }
    return A[0];
}

float avg(int A[], int size)
{
    int i,sum=0;
    for(i=0;i<size;i++)
    {
        sum=sum+A[i];
    }
    return sum/size;
}

int sum(int A[], int size)
{
    int i,sum=0;
    for(i=0;i<size;i++)
    {
        sum=sum+A[i];
    }
    return sum;
}





















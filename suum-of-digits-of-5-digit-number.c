#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int size=0 ;
    scanf("%d",&size) ;
    int array[size] ;
    int sum = 0 ;
    for(int i=0 ; i<size ; i++)
    {
        scanf("%d",&array[i]) ;
    }
    for (int i=0; i<size; i++) 
    {
        sum+=array[i] ;
    }
    printf("%d",sum) ;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
// C program to check positive negative or zero using switch case.
#include <stdio.h>
int main()
{
    int num ;
    printf("Enter a number: ") ; 
    scanf("%d",&num) ;
    switch(num<0) 
    {
      case 1:
        printf("%d is negative",num) ;
        break ;
      case 0:
        switch(num>0)
        {
            case 1 :
                printf("%d is positive",num) ;
                break ;
            case 0 :
                printf("%d is zero",num) ;
        }
    }
    return 0 ;
}
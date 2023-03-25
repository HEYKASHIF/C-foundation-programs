/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    float s1,s2,s3,s4,sum,per;
    
    
    printf("enter marks for four subjects = ");
    
    scanf("%f%f%f%f", &s1, &s2, &s3, &s4);;
    
    (sum=s1+s2+s3+s4);
    
    printf("sum of all subjects %f\n" , sum);
    
    per=(sum/4);
    
    if(per>=80)
      printf("you got grade A");
    
    else if(per>=70)
      printf("you got grade B");
    
    else if(per>=60)
      printf("you got grade C");
    
    else if(per>=50)
      printf("you got grade D");
    
    else
      printf("you are fail");
    

    return 0;
}

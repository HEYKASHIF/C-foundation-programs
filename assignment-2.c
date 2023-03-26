#include<stdio.h>
int main()
{
    float s1,s2,s3,s4,sum,per;
    
    
    printf("enter marks for four subjects = ");
    
    scanf("%f%f%f%f", &s1, &s2, &s3, &s4);
    
    (sum=s1+s2+s3+s4);
    
    printf("sum of all subjects %f\n" , sum);
    
    per=(sum/4);
    
    if(per>75)
      printf("your grade is A");
    
    else if(60<per<75)
      printf("your grade is B");
    
    else if(45<per<60)
      printf("your grade is C");
    
    else if(35<per<45)
      printf("your grade is D");
    
    else if(per<35)
      printf("your grade is E");
    

    return 0;
}




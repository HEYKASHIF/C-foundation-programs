#include<stdio.h>
void printeven(int n)
{
    int i,even=2;
    for(i=1;i<=n;i++)
      {
          printf("%d",even);
          even+=2;     
      }
}
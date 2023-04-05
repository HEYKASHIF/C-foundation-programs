#include<stdio.h>
#include<string.h>
void compare(int a[],int b[]);
int main()
{
    char a[10],b[10];
    printf("Please, Enter your first name = ");
    gets(a);
    printf("Please, Enter your second name = ");
    gets(b);
    compare(a,b);
    return 0;
}
void compare(int a[],int b[])
{
    int r;
    r=strcmp(a,b);
    if(r==-1)
      printf("your strings are in Dictionary order");
    if(r==0)
      printf("your strings are same");
    if(r==1)
      printf("your strings are not in Dictionary order");
      
}
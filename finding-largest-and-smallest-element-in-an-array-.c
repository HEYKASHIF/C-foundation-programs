#include<stdio.h>
int main()
  {
    int a[50],i,n,large,small;
    printf("Enter the number of elements : \n");
    scanf("%d",&n);
    printf("Input %d elements in array = \n",n);
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);

    large=small=a[0];

     for(i=1;i<n;i++)
     {
       if(a[i]>large)
         large=a[i];

       if(a[i]<small)
         small=a[i];
     }

    printf("The smallest element is %d\n",small);
    printf("The largest element is %d\n",large);
    return 0;
  }
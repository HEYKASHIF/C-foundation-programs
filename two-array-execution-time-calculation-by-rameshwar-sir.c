#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main()
{
    int i, j, temp;
    int count=0;
    int N[10000], K[100000];
    time_t t;
    //srand((unsigned) time(&t));
    srand( time(NULL));


//for array N........................................................................................................................
    for(i=1;i<=10000;i++)
    {
        temp=rand()%100;
        N[i]=temp;
    }
    

//for array K........................................................................................................................
    for(j=1;j<=100000;j++)
    {
        temp=rand()%100;
        K[j]=temp;
    }
    
    
// FOR SEARCHING THE ELEMENT OF ARRAY[K] IN ARRAY[N]...............................................................................
    clock_t begin = clock();
    int last=10;
    for(int first_Loop = 1 ; first_Loop<=last ; first_Loop++)   
    {
        for(j=1;j<=100000;j++)
        {
            for(i=1;i<=10000;i++)
            {
            if(K[j]==N[i])
                count++;
            }
        }
        printf("number of elements presents in ARRAY [N], in %dth iteration %d\n",first_Loop,count) ;
        count=0 ;
    }
    
    clock_t end = clock();
    float time_spent = (end - begin) / CLOCKS_PER_SEC;
    printf("\n execution time for %dtimes iteration in seconds is %fseconds",last,time_spent);
    
    return 0;
}




#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
int temp0 ;
void sort_by_area(triangle* tr, int n)
{
    int arr[n]; 
    for(int i=0 ; i<n ; i++)
    {
        float p=((tr[i].a + tr[i].b + tr[i].c)/2.0);
        int sqt=(p*(p-tr[i].a)*(p-tr[i].b)*(p-tr[i].c));
        arr[i] = sqt ;
    }

    int temp1;
    for(int round=1 ; round<=n-1 ; round++)
    {
        for(int i=0 ; i<=((n-1)-round) ; i++)
        {
            if(arr[i]>arr[i+1])
            {
                temp1=tr[i].a;
                tr[i].a=tr[i+1].a;
                tr[i+1].a=temp1;
                
                temp1=tr[i].b;
                tr[i].b=tr[i+1].b;
                tr[i+1].b=temp1;
                
                temp1=tr[i].c;
                tr[i].c=tr[i+1].c;
                tr[i+1].c=temp1;
                
                temp0 = arr[i] ;
                arr[i] = arr[i+1] ;
                arr[i+1] = temp0 ;
            }
        }
    }
}


int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}















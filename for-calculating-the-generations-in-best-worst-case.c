#include <stdio.h>
int main()
{
    int best=0;
    int worst=0;
    int x = 14;
    int y = 18;
    //printf("%d", 90 / 18);
    for (int i=1;i<=(9000/14);i++)
    {
        if (x<=9000)
        {
            
            x+=14;
            ++best;
        }
        if (y<=9000)
        {
            
            y+=18;
            ++worst;
        }
    }
    printf("best case = %d", best);
    printf("\nworst case = %d", worst);
    return 0;
}

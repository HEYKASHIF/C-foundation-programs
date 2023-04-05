#include <stdio.h>
int main()
{
    int c;
    int i, j;
    for (i = 0; i <= 6; i++)
    {
        for (j = 0; j <= 3; j++)
        {
            c = 3 - i;
            if ((c < 0))
            {
                c=c*-1;
            }

            if (j == 0 || j == c)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            
        }
        printf("\n");
    }
    return 0;
}
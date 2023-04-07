#include <stdio.h>
int main()
{
    int n, count1 = 0, count2 = 0, count3 = 0;
    printf("Enter the number of elements = ");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the %dth element ", i);
        scanf("%d", &arr[i]);
    }

    // FOR AP..........................................................................................................................
    for (int i = 0; i < n - 3; i++)
    {
        if ((arr[i + 2] - arr[i + 1]) == (arr[i + 1] - arr[i]))
        {
            count1 += 1;
        }
    }
    if (count1 == n - 3)
    {
        printf("Your series is in AP\n");
    }
    else
    {
        printf("Your series is not in AP.\n");
    }

    // FOR GP..........................................................................................................................
    for (int i = 0; i < n - 3; i++)
    {
        if ((arr[i + 2] / arr[i + 1]) == (arr[i + 1] / arr[i]))
        {
            count2 += 1;
        }
    }
    if (count2 == n - 3)
    {
        printf("Your series is in GP.\n");
    }
    else
    {
        printf("Your series is not in GP.\n");
    }

    // FOR HP..........................................................................................................................
    for (int i = 0; i < n - 3; i++)
    {

        if (((1 / arr[i + 2]) - (1 / arr[i + 1])) == ((1 / arr[i + 1]) - (1 / arr[i])))
        {
            count3 += 1;
        }
    }
    if (count3 == n - 3)
    {
        printf("Your series is in HP.");
    }
    else
    {
        printf("Your series is not in HP.");
    }

    return 0;
}
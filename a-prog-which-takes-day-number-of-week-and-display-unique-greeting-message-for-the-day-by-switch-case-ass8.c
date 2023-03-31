#include<stdio.h>
int main()
{
    int n;
    printf("1. MONDAY");
    printf("2. TUESDAY");
    printf("3. WEDNESDAY");
    printf("4. THURSDAY");
    printf("5. FRIDAY");
    printf("6. SATURDAY");
    printf("7. SUNDAY");
    printf("Enter your choice from above = ");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
          printf("Hey! Mornin Its Miracle MONDAY.");
          break;
        case 2:
          printf("Hey! Sweetie Have A Terrific TUESDAY.");
          break;
        case 3:
          printf("Good Morning Sleeping Beauty.");
          break;
        case 4:
          printf("Hey! Sunshine Its Morning Time.");
          break;
        case 5:
          printf("Hey! Good Morning Dew Drops.");
          break;
        case 6:
          printf("Hey! Sleepy Eyes Its Time To Rise And Shine.");
          break;
        case 7:
          printf("Happy Sunday My Dear.");
          break;
        default:
          printf("Invalid choice.");
    }
    return 0;
}



















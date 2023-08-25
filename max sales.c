#include <stdio.h>
#define MONTHS 12

int main()
{
    int num_salespersons;
    printf("Enter the number of salespersons: ");
    scanf("%d", &num_salespersons);

    int sales[num_salespersons][MONTHS];
    for (int i = 0; i < num_salespersons; i++) 
    {
        printf("Enter the sales for salesperson %d:\n", i + 1);
        for (int j = 0; j < MONTHS; j++) 
        {
            printf("Month %d: ", j + 1);
            scanf("%d", &sales[i][j]);
        }
    }

    int max_sales = 0;
    for (int i = 0; i < num_salespersons; i++) {
        int total_sales = 0;
        for (int j = 0; j < MONTHS; j++) 
        {
            total_sales += sales[i][j];
        }
        if (total_sales > max_sales) 
        {
            max_sales = total_sales;
        }
    }

    printf("The maximum sales done by a particular salesperson in a year is: %d\n", max_sales);
    return 0;
}


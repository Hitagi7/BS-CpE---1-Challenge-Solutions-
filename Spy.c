#include <stdio.h>
#include <stdbool.h>

bool spyChecker(int n, int m, int arr[][m]);

int main(void)
{
    int rows, columns, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &columns);

    int array[rows][columns];

    puts("Elements:");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
            scanf("%d", &array[i][j]);
    }

    spyChecker(rows, columns, array) ? puts("SPY") : puts("NONE");

    return 0;
}

bool spyChecker(int n, int m, int arr[][m])
{
    int i, j, k, ctr, spyFinder = 0;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            ctr = 0;
            for (k = 0; k < m; k++)
            {
                if (arr[i][j] == arr[i][k])
                {
                    ctr++;
                    continue;
                }
            }
            if (ctr == 1)
            {
                spyFinder++;
            }
        }
    }
    return spyFinder ? true : false;
}
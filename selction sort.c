#include <stdio.h>
#include <conio.h>

int main()
{

    int a[6] = {56, 23, 12, 20, 5, 15};
    int i, j, swap;
    int n = 6;
    
    /*printing Unsorting array  */
    printf("\n unsorted array list is:");

    for (i = 0; i < 6; i++)
    {

        printf("\n%d", a[i]);
    }

    /* sorting array using selection  sort  */

    for (i = 0; i < n-1; i++)
    {
        int min = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j]<a[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
             swap = a[i];
            a[i] = a[min];
            a[min] = swap;
        }
    }
    printf("\n sorted list is:");
    for (i = 0; i < n; i++)
    {
        printf("\n%d", a[i]);
    }

    return 0;
}
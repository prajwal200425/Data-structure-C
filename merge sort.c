#include <stdio.h>

#include <conio.h>

void quicksort(int number[30], int first, int last)

{

    int i, j, pivot, temp;

    if (first < last)

    {

        pivot = first;

        i = first;

        j = last;

        while (i < j)

        {

            while (number[i] <= number[pivot] && i < last)

                i++;

            while (number[j] > number[pivot])

                j--;

            if (i < j)

            {

                temp = number[i];

                number[i] = number[j];

                number[j] = temp;
            }
        }

        temp = number[pivot];

        number[pivot] = number[j];

        number[j] = temp;

        quicksort(number, first, j - 1);

        quicksort(number, j + 1, last);
    }
}

void main()

{

    int i, count, number[30];

    printf("\n How many elements are you going to enter?: ");

    scanf("%d", &count);

    for (i = 0; i < count; i++)

        scanf("%d", &number[i]);

    printf("\nArray before Sorted: ");

    for (i = 0; i < count; i++)

        printf("\n%d", number[i]);

    quicksort(number, 0, count - 1);

    printf("\nArray after Sorted:");

    for (i = 0; i < count; i++)

        printf("\n%d", number[i]);

    getch();
}
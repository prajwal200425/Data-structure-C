#include <stdio.h>
#include <conio.h>
              /*bubble sort */
int main()
{

  int array[] = {56, 23, 12, 20, 5, 15};
  int i, j, temp;
  int n = 6;

  /*printing Unsorting array  */
  printf("\n unsorted array list is:");

  for (i = 0; i < 6; i++)
  {

    printf("\n%d", array[i]);
  }
  /* sorting array using bubble sort  */

  for (i = 0; i < 6 - 1; i++)
  {
    for (j = 0; i < 6 - j - 1; j++)
    {
      if (array[j] > array[j + 1])
      {
        temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }
  printf("\n sorted list is:");
  for (i = 0; i < 6; i++)
  {
    printf("\n %d", array[i]);
  }

  return 0;
}
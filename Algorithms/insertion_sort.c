#include <stdio.h>
#include <cs50.h>

//worst case O(n^2)
//best case Ω(n)

int main(void)
{
    int array[6] = {5, 2, 1, 3, 6, 4};
    int n =  sizeof(array) / sizeof(array[0]);
    int c, d, t, flag = 0;
    for (c = 1 ; c <= n - 1; c++) {
    t = array[c];

    for (d = c - 1 ; d >= 0; d--) {
      if (array[d] > t) {
        array[d+1] = array[d];
        flag = 1;
      }
      else
        break;
    }
    if (flag)
      array[d+1] = t;
  }

  printf("Sorted list in ascending order:\n");

  for (c = 0; c <= n - 1; c++) {
    printf("%d ", array[c]);
  }
  printf("\n");
}

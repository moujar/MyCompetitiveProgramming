#include <stdio.h>

void InsertionSort(int *arr, int len)
{
  int i, j, value;
  for (int i = 1; i < len ; i ++)
    {
      value = arr[i];
      j = i - 1;
      while(j >= 0  && arr[j] > value)
      {
          arr[j + 1] = arr[j];
          j--;
      }
      arr[j + 1] = value;
    }
}

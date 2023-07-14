#include <stdio.h>
#include<stdlib.h>


void MergeArr(int *arr, int start, int medium , int end)
{
  int i, j, k;
  int n1, n2;
  n1 = medium - start +1;
  n2 = end - medium;
  int L[n1];
  int R[n2];

  for(int i= 0 ; i < n1; i++)
    L[i] = arr[start + i];
  for (int j= 0; j < n2 ; j++)
    R[j] = arr[medium + 1 + j];
  i = 0;
  j = 0;
  k = start;
  while (i < n1 && j < n2){
    if(L[i] <= R[j]){
      arr[k] = L[i];
      i++;
    }
    else{
      arr[k] = R[j];
      j++;
    }
    k++;
  }
  while (i < n1){
    arr[k] = L[i];
    i++;
    k++;
  }
  while(j < n2){
    arr[k]= R[j];
    j++;
    k++;
  }
}

void merge(int *arr, int start, int end){
  int medium;
  if( start < end)
  {
    medium = start + ( end - start) / 2 ;
    merge(arr,start,medium);
    merge(arr,medium + 1,end);
    MergeArr(arr, start, medium, end);
  }
}

void printArray(int A[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}

int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
 
    printf("Given array is \n");
    printArray(arr, arr_size);
 
    merge(arr, 0, arr_size - 1);
 
    printf("\nSorted array is \n");
    printArray(arr, arr_size);
    return 0;
}
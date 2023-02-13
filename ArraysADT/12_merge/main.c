#include <stdio.h>
#include <stdlib.h>

struct Array
{
  int A[20];
  int size;
  int length;
};

void swap(int *a, int *b){ //here i swap the values
  int tmp = *b;
  *b = *a;
  *a = tmp;
}


void Display(struct Array arr)
{
  int i;
  printf("Elements are \n");
  for(i=0; i<arr.length;i++){
    printf("%d ",arr.A[i]);
  }
}

struct Array merge(struct Array arr1, struct Array arr2){
  struct Array *arr3=(struct Array *)malloc(sizeof(struct Array));
  int i,j,k;
  i = 0, j = 0, k = 0;

  while(i < arr1.length && j < arr2.length){
      if(arr1.A[i] < arr2.A[j])
        arr3->A[k++] = arr1.A[i++];
      else
        arr3->A[k++] = arr2.A[j++];
  }

  for(;i<arr1.length;i++)
    arr3->A[k++]=arr1.A[i];
  for(;j<arr2.length;j++)
    arr3->A[k++]=arr2.A[j];

  arr3->length=arr1.length+arr2.length;
  arr3->size=arr1.size;
  return *arr3;
}

int main()
{
  struct Array arr1={{3,8,16,20,25},20,5};
  struct Array arr2={{4,10,12,22,23},20,5};
  struct Array arr3;

  arr3 = merge(arr1,arr2);

  Display(arr3);
  printf("\n%d ",arr3.length);
  printf("\n%d ",arr3.size);

  return 0;
}
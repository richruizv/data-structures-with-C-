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


void insertSort(struct Array *arr,int x){
  int i=arr->length-1;
  if(arr->length == arr->size)
    return;
  while(i>=0 && arr->A[i]>x){
    arr->A[i+1]=arr->A[i];
    i--;
  }
  arr->A[i+1]= x;
  arr->length++;

}

int isSorted(struct Array arr){
  for(int i=1;i<arr.length;i++){
    if(arr.A[i-1] > arr.A[i])
      return 0;
  }
  return 1;
}

void Display(struct Array arr)
{
  int i;
  printf("Elements are \n");
  for(i=0; i<arr.length;i++){
    printf("%d ",arr.A[i]);
  }
}

void Rearrange(struct Array *arr){
  int i,j;
  i = 0;
  j=arr->length-1;
  while(i<j)
  {
    while(arr->A[i]<0)i++;
    while(arr->A[j]>=0)j--;

    if(i<j)
      swap(&arr->A[i],&arr->A[j]);
  }
}

int main()
{
  struct Array arr={{2,3,4,5,10,15},20,6};

  if (isSorted(arr) == 1){
    insertSort(&arr,1);
  }else{
    printf("not sorted!");
  }

  Display(arr);

  struct Array arr2={{2,3,-4,5,-10,-15,6},20,7};

  Rearrange(&arr2);
  Display(arr2);

  return 0;
}
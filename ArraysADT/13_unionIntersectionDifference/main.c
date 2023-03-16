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
  printf("\nElements are \n");
  for(i=0; i<arr.length;i++){
    printf("%d ",arr.A[i]);
  }
}

struct Array* Union(struct Array arr1, struct Array arr2){
  struct Array *arr3=(struct Array *)malloc(sizeof(struct Array));
  int i,j,k;
  i = 0, j = 0, k = 0;

  while(i < arr1.length && j < arr2.length){
      if(arr1.A[i] < arr2.A[j])
        arr3->A[k++] = arr1.A[i++];
      else if (arr2.A[j] < arr1.A[i])
        arr3->A[k++] = arr2.A[j++];
      else {
        arr3->A[k++]=arr1.A[i++];
        j++;
      }
  }

  for(;i<arr1.length;i++)
    arr3->A[k++]=arr1.A[i];
  for(;j<arr2.length;j++)
    arr3->A[k++]=arr2.A[j];

  arr3->length=k;
  arr3->size=arr1.size;
  return arr3;
}

struct Array* Intersection(struct Array arr1, struct Array arr2){
  struct Array *arr3=(struct Array *)malloc(sizeof(struct Array));
  int i,j,k;
  i = 0, j = 0, k = 0;

  while(i < arr1.length && j < arr2.length){
      if(arr1.A[i] < arr2.A[j])
        i++;
      else if (arr2.A[j] < arr1.A[i])
        j++;
      else if (arr1.A[i] == arr2.A[j]) {
        arr3->A[k++]=arr1.A[i++];
        j++;
      }
  }

  arr3->length=k;
  arr3->size=arr1.size;
  return arr3;
}

struct Array* Difference(struct Array arr1, struct Array arr2){
  struct Array *arr3=(struct Array *)malloc(sizeof(struct Array));
  int i,j,k;
  i = 0, j = 0, k = 0;

  while(i < arr1.length && j < arr2.length){
      if(arr1.A[i] < arr2.A[j])
        arr3->A[k++] = arr1.A[i++];
      else if (arr2.A[j] < arr1.A[i])
        j++;
      else if (arr1.A[i] == arr2.A[j]) {
        i++;
        j++;
      }
  }

  for(;i<arr1.length;i++)
    arr3->A[k++]=arr1.A[i];

  arr3->length=k;
  arr3->size=arr1.size;
  return arr3;
}

int main()
{
  struct Array arr1={{2,6,10,15,25},20,5};
  struct Array arr2={{3,6,7,15,20},20,5};
  struct Array *arr3;

  arr3 = Union(arr1,arr2);

  Display(*arr3);

  arr3 = Intersection(arr1,arr2);

  Display(*arr3);

  arr3 = Difference(arr1,arr2);

  Display(*arr3);

  return 0;
}
#include <stdio.h>
#include <stdlib.h>

struct Array
{
  int A[10];
  int size;
  int length;
};

void Display(struct Array arr)
{
  int i;
  printf("Elements are \n");
  for(i=0; i<arr.length;i++){
    printf("%d ",arr.A[i]);
  }
  printf("\n");
}

void Delete(struct Array *arr, int index)
{
  if(index >= 0 && index <=arr->length){
    for(int i = index; i < arr->length -1; i++)
      arr->A[i] = arr->A[i+1];
    arr->length--;
  }

}

int main()
{
  struct Array arr={{2,3,4,5,6},10,5};

  Delete(&arr,3);

  Display(arr);

  return 0;
}
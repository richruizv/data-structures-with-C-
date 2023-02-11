#include <stdio.h>
#include <stdlib.h>

struct Array
{
  int A[20];
  int size;
  int length;
};

int Get(struct Array arr,int index){
  if( index>=0 && index < arr.length)
    return arr.A[index];
  return -1;
}

void Set(struct Array arr,int index, int x){
  if( index>=0 && index < arr.length)
    arr.A[index] = x;
}

int Max(struct Array arr)
{
  int max=arr.A[0];
  int i;
  for(i=1; i< arr.length; i++)
  {
      if(arr.A[i]>max)
        max=arr.A[i];
  }
  return max;
}

int Min(struct Array arr)
{
  int min=arr.A[0];
  int i;
  for(i=1; i< arr.length; i++)
  {
      if(arr.A[i]<min)
        min=arr.A[i];
  }
  return min;
}

int Sum(struct Array arr)
{
  int s=0;
  int i;
  for(i=1; i< arr.length; i++)
    s +=arr.A[i];
  return s;
}

float Avg(struct Array arr)
{
  return (float)Sum(arr)/arr.length;
}


int main()
{
  struct Array arr={{2,3,4,5,6},20,5};


  printf("%d\n",Sum(arr));

  return 0;
}
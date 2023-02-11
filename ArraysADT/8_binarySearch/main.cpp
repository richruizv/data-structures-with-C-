#include <stdio.h>

int A[15] = {4,8,10,15,18,21,24,27,29,33,34,37,39,41,43};

int bsearch(int start, int end,int key)
{
  // tail recursion
  int mid = (start + end) / 2;

  if(key == A[mid])
    return mid;

  if(start == end)
    return -1;

  if(key > A[mid])
    return bsearch(mid+1,end,key);
  else
    return bsearch(start,mid-1,key);
}

int main(){

  int key=10;

  printf("Number in position %d \n",bsearch(0,14,key));

  return 0;
}
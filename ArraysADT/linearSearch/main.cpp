#include <stdio.h>

int search(int A[10],int n)
{
  for(int i=0;i<n;i++){
    if(A[i] == n)
      return i;
  }
  return -1;

}

int main(){

  int A[10] = {7,9,5,2,8,3,6,1,5,4};
  int n;

  printf("Enter number to search: ");
  scanf("%d",&n);
  printf("Number in position %d \n",search(A,n));
  return 0;
}
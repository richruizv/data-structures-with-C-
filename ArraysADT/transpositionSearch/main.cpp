#include <stdio.h>

void swap(int *a, int *b){ //here i swap the values
  int tmp = *b;
  *b = *a;
  *a = tmp;
}

int search(int *A,int n)
{
  for(int i=0;i<10;i++){
    if(A[i] == n){
        swap(&A[i],&A[0]); // i'll send the pointer of my array
        return 0;
    }
  }
  return -1;

}

int main(){

  int A[10] = {7,9,0,2,8,3,6,1,5,4};
  int n;

  while(1){
    printf("Enter number to search: ");
    scanf("%d",&n);
    printf("Number in position %d \n",search(A,n));
    for(int i=0;i<10;i++){
      printf("%d,",A[i]);
    }
  }

  return 0;
}
#include <stdio.h>
#include <stdlib.h>
int main(){
  // you can't increaze an array of larger size
  // so you should move your pointer to an array of larger size

  int *p, *q;
  int i;

  p=(int *)malloc(5*sizeof(int));
  p[0]= 3;p[1]= 5;p[2]= 7;p[3]= 9;p[4]= 11;
  printf("Values in p \n");
  for( int i = 0; i < 5; i++)
    printf("%d ",p[i]);

  q=(int *)malloc(10*sizeof(int));

  printf("\nMoving each value of q to p \n");
  for( int i = 0; i < 5; i++)
    q[i]=p[i];

  printf("Values in q \n");
  for( int i = 0; i < 5; i++)
    printf("%d ",q[i]);

  printf("\nFreeing memory in  p \n");
  free(p);
  printf("Assigning memory from q to p \n");
  p = q;
  printf("Deleting q \n");
  q = NULL;

  printf("Values in p \n");
  for( int i = 0; i < 5; i++)
    printf("%d ",p[i]);







  return 0;
}
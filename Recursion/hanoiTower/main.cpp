#include <stdio.h>

void towerh(int n, int a, int b, int c){
  if(n>0){
    towerh(n-1, a, c, b);
    printf("from %d to %d \n",a,c);
    towerh(n-1, b, a, c);
  }

}

int main(){

  towerh(2,1,2,3);

  return 0;
}
#include<stdio.h>

void funB(int n);
void funC(int n);

void funA(int n){
  if (n > 0){
    printf("%d ",n);
    funB(n+1);
  }
}
void funB(int n){
  if ( n > 1){
    printf("%d ",n);
    funC(n-2);
  }
}

void funC(int n){
  if ( n > 1){
    printf("%d ",n);
    funA(n/2);
  }
}


int main(){
  funA(20);

  return 0;
}
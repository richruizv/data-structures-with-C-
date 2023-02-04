#include <stdio.h>

int fib(int n){
  if ( n > 1){
    return fib(n-2) + fib(n-1);
  }else
    return n;
}

int F[42];

int mfib(int n){
  if(n > 1){
    if(F[n-2] == -1 )
      F[n-2]=mfib(n-2);
    if(F[n-1] == -1 )
      F[n-1]=mfib(n-1);
    return F[n-2] + F[n-1];

  }else{
    F[n]=n;
    return n;
  }

}

int main(){

  int i;
  for(i=0; i < 42; i++)
    F[i]=-1;
  //printf(" %d", fib(42));
  // without memoization 1.6 seconds

  printf(" %d", mfib(42));
  // with memoization 0.079 seconds

  return 0;
}
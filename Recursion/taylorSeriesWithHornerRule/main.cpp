#include <stdio.h>

double e(int x, int n){
  static double s;
  if(n == 0)
    return s;
  s = 1+x*s/n;
  return e(x, n -1);
}

double e2(int x, int n){
  double s = 1;
  for(; n > 0; n--){
    s = 1+x*s/n;
  }
  
  return s;
}

int main(){

  printf(" %lf", e2(1,10));

  printf(" %lf", e(1,10));

  return 0;
}
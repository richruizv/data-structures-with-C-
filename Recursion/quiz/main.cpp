#include <stdio.h>

int f (int &x, int c)
{
  c = c - 1;
  if (c == 0) return 1;
    x = x + 1;
  return f(x,c) * x;
}

int main(){

  int n = 4;

  for(int k=1; k<n; ++k){
    printf("%d %d\n",k,n);
  }



  return 0;
}
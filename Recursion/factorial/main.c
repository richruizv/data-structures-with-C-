#include <stdio.h>

int fact(int n)
{
  if(n > 0){
    return n * fun( n - 1 );
  }
  else
    return 1;
}

int main()
{
  int r;
  r=fact(10); // 5 * 4 * 3 * 2 * 1 = 120
  printf("%d\n",r);
  return 0;
}
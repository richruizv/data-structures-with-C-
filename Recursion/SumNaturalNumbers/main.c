#include <stdio.h>

int sum(int n)
{
  if(n > 0){
    return n + fun( n - 1 );
  }
  else
    return 0;
}

int main()
{
  int r;
  r=sum(10); // 5 + 4 + 3 + 2 + 1 = 15
  printf("%d\n",r);
  return 0;
}
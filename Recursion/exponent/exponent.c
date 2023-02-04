#include <stdio.h>

// Exponent m^n
int power(int m, int n){
  if(n > 0){
    return power( m, n-1 ) * m;
  }else{
    return 1;
  }
}

int pow_optimized(int m, int n){
  if(n == 0){
    return 1;
  }

  if(n % 2 == 0){
    return pow_optimized( m*m, n/2 );
  }else{
    return pow_optimized( m*m, (n-1)/2 ) * m;
  }
}

int main(){

  int value = 2,exponent = 9;
  int result;

  result = power(value,exponent);
  printf("power %d ",result);

  result = pow_optimized(value,exponent);
  printf("optimized %d ",result);

  return 0;
}
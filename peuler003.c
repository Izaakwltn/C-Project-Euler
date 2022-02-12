//Project Euler # 3
//Largest Prime Factor of 600851475143
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//run with gcc peuler004.c -lm

int primep (int n){
  double sr = sqrt(n);
  for (int i = 2; i <= sr; i++){
    if (n % i == 0){
      return 0;
    }
  }
  return 1;
}

int lpf (long n){
  double sr = sqrt(n);
  int largestprimefactor = 0;
  for (int i = 2; i <= sr; i++){
    if ((n % i == 0) && primep(i)){
      largestprimefactor = i;
    }
  }
  return largestprimefactor;
}

int main(){
  printf("%d\n", lpf(600851475143));
  return 0;
}

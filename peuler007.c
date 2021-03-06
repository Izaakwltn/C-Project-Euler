//Project Euler # 7

//10001st prime

#include <stdio.h>
#include <math.h>

int isprime(int n){
  for (int i = 2; i <= sqrt(n); i++){
    if (n % i == 0){
      return 0;
    }
  }
  return 1;
}

int main(){
  int primeCount    = 1;
  int currentNumber = 2;

  while (primeCount < 10001){
    currentNumber++;
    
    if (isprime(currentNumber)){
      primeCount++;
    }
  }

  printf("%d\n", currentNumber);

  return 0;  
}

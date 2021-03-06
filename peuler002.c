//Project Euler # 2

#include <stdio.h>

int main(){
  int evenfibsum = 0;

  int currentfib = 1;
  int oldfib1 = 1;
  int oldfib2 = 1;

  while(currentfib < 4000000){
    oldfib2 = oldfib1;
    oldfib1 = currentfib;
    currentfib = oldfib1 + oldfib2;

    if (currentfib % 2 == 0){
      evenfibsum += currentfib;
    }
  }
  printf("%d\n", evenfibsum);
  return 0;
}

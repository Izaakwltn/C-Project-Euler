//Project Euler # 6

//difference between the sum of the squares and the square of the sum
//------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>

int main() {
  int sumOfSquares = 0;

  for (int i = 1; i <= 100; i++){
    sumOfSquares += (i * i);
  }

  int squaredSum = 0;

  for (int i = 1; i <= 100; i++){
    squaredSum += i;
  }

  squaredSum = (squaredSum * squaredSum);

  int sumSquareDifference = (squaredSum - sumOfSquares);

  printf("%d\n", sumSquareDifference);

  return 0;
}

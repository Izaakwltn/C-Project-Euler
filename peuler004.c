//Project Euler # 4

//A palindromic number reads the same both ways.
//The largest palindrome made from the product of two 2-digit numbers is

//9009 = 91 × 99.

//Find the largest palindrome made from the product of two 3-digit numbers.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int palindromep (int n){
  char stringnum[6];
  snprintf(stringnum, 6, "%d", n);

  char reversenum[6];
  
  if (stringnum == strrev(stringnum)){
    return 1;
  }
  return 0;
}

int main(){
  printf("%d\n", palindromep(202));
  printf("%d\n", palindromep(100));
  return 0;
}

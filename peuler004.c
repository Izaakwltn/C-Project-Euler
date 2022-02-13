//Project Euler # 4

//A palindromic number reads the same both ways.
//The largest palindrome made from the product of two 2-digit numbers is

//9009 = 91 × 99.

//Find the largest palindrome made from the product of two 3-digit numbers.

//------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int palindromep (int n){
  char stringnum[7];
  snprintf(stringnum, 7, "%d", n);

  int begin = 0;
  int end   = (strlen(stringnum) - 1);

  while (end > begin){
    if (stringnum[begin] != stringnum[end]){
      return 0;
    }
    begin++;
    end--;
  }
  return 1;
}
      

int main(){
  int bigpalindrome = 1;

  for (int i = 100; i < 1000; i++){
    for (int j = 100; j < 1000; j++){
      if (palindromep(i * j) && ((i * j) > bigpalindrome)){
	  bigpalindrome = (i * j);
	}
    }
  }
  printf("%d\n", bigpalindrome);
  return 0;
}

//------------------------------------------------------------------------

/*void reversenum(char *stringnum){

  if (stringnum == 0){
    return;
  }

  if (*stringnum == 0){
    return;
    }

  char *start = stringnum;
  char *end   = start + strlen(stringnum) - 1;
  char temp;

  while (end > (start + 1)){
    temp   = *start;
    *start = *end;
    *end   = temp;

    ++start;
    --end;
  }
}*/

/*int palindromep (int n){
  char stringnum[7];
  snprintf(stringnum, 7, "%d", n);
  //printf("stringnum: %s\n", stringnum);
  char mungnirts[7]; //backwards stringnum
  snprintf(mungnirts, 7, "%d", n);
  //printf("mungnirts: %s\n", mungnirts);

  reversenum(mungnirts);
  printf("%s---%s\n", stringnum, mungnirts);

  return (strcmp(stringnum, mungnirts) == 0);
  }*/

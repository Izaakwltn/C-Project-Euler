//Project Euler # 5
//2520 is the smallest number that can be divided by
//each of the numbers from 1 to 10 without any remainder.

//What is the smallest positive number that is
//evenly divisible by all of the numbers from 1 to 20?
//------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
//#include <math.h>

//------------------------------------------------------------------------
//Check for prime factors
//------------------------------------------------------------------------

int smallestCommonMultiple (int n){
  for (int i = 1; i <= 20; i++){
    if (n % i != 0){
      return 0;
    }
  }
  return 1;
}

int main(){

  int num = 1;
  while (!smallestCommonMultiple(num)){
    num++;
  }
  printf("%d\n", num);
  return 0;
}

//------------------------------------------------------------------------
//Trying for an elegant, factorized linked list, save for another time:
/*

int isprime(int n){
  for (int i = 2; i < sqrt(n); i++){
    if (n % i == 0){
      return 0;
    }
  }
  return 1;
}

//------------------------------------------------------------------------
//Make linked list of factors:
//------------------------------------------------------------------------

struct Factor
{
  int n;
  struct Factor* next;
};

void addFactor(struct Factor** head_address, int num){

  struct Factor* new_factor = (struct Factor*) malloc(sizeof(struct Factor));

  new_factor->n    = num;
  new_factor->next = (*head_address);
  (*head_address)  = new_factor;
}
//Checks whether the factor list already has that factor
int factorCheck(struct Factor* head, int f){

  if (head == NULL){
    return 0;
  }

  if (head->n == f){
    return 1;
  }

  return factorCheck(head->next, f);
}

//Multiplies full list of factors:
int factorMultiply(struct Factor* head){

  int smallestMultiple = 1;

  while (head != NULL){
    

    //return (head->n * factorMultiply(head->next));
}
    

//------------------------------------------------------------------------
//main

int main(){

  struct Factor* head = NULL;

  addFactor(&head, 2);
  
  for (int i = 2; i < 21; i++){
    for (int j = 2; j <= i; j++){
      if ((i % j == 0) || isprime(j)){
	if (!factorCheck(head, j)){
	  addFactor(&head, j);
	}
      }
    }
  }
      
    
    
  printf("%d\n", factorMultiply(head));
  return 0;
}
*/

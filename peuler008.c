//Project Euler #8

//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*int firstThirteen(char *dl){
  int product = 1;
  
  for (int i = 0; i <= 12; i++){
    long n = strtol(*(dl+i));
    product *= n;
      }
  //if (product > biggestProduct){
  //biggestProduct = product;
  return product;
  }*/

struct Digit
{
  long n;
  struct Digit* next;
};

void addDigit(struct Digit** head_address, long num){

  struct Digit* new_digit = (struct Digit*)malloc(sizeof(struct Digit));

  new_digit->n    = num;
  new_digit->next = (*head_address);
  (*head_address) = new_digit;
}

int listLength(Digit* head)
{
  if (head == NULL) {
    return 0;
  }

  else {
    return 1 + listLength(head->next);
  }
}

long firstThirteen(struct Factor* head){
  int product = 1;
  int counter = 13;

  while (counter > 0){
    product *= head->n;
    head = head->next;
    counter--
  }

  return product;
}


int main(){
  char digitList[] = "7316717653133062491922511967442657474235534919493496983520312774506326239578318016984801869478851843858615607891129494954595017379583319528532088055111254069874715852386305071569329096329522744304355766896648950445244523161731856403098711121722383113622298934233803081353362766142828064444866452387493035890729629049156044077239071381051585930796086670172427121883998797908792274921901699720888093776657273330010533678812202354218097512545405947522435258490771167055601360483958644670632441572215539753697817977846174064955149290862569321978468622482839722413756570560574902614079729686524145351004748216637048440319989000889524345065854122758866688116427171479924442928230863465674813919123162824586178664583591245665294765456828489128831426076900422421902267105562632111110937054421750694165896040807198403850962455444362981230987879927244284909188845801561660979191338754992005240636899125607176060588611646710940507754100225698315520005593572972571636269561882670428252483600823257530420752963450";

  struct Digit* head = (struct Digit*)malloc(sizeof(struct Digit));

  char * token = strtok(string, "");
  
  while (token != NULL){
    long n = strtol(token);
    addDigit(&head, n);
    token = strtok(NULL, "");
  }
    

  int biggestProduct = 0;

  while (strlen(digitList) > 13){
    int n = firstThirteen();

    if (n > biggestProduct){
      biggestProduct = n;
    }
    firstDigit = *(firstDigit+1);
  }
  printf("%d", biggestProduct);
  return 0;
}

//make a linked list, each link filled with a strtol()'d strtok taken from the digitList
//Make a function that cycles through the first 5

struct Digit
{
  long n;
  struct Digit* next;
};

void addDigit(struct Digit** head_address, long num){

  struct Digit* new_digit = (struct Digit*)malloc(sizeof(struct Digit));

  new_digit->n    = num;
  new_digit->next = (*head_address);
  (*head_address) = new_factor;
}

long firstThirteen(struct Factor* head){
  int product = 1;
  int counter = 13;

  while (counter > 0){
    product *= head->n;
    head = head->next;
    counter --
  }

  return product;
}

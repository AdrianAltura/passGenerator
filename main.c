#include <stdioh.>
#include <string.h>
#include <time.h>

int randomNumber(int lower, int upper);

int main(void){ 

  srand(time(NULL));
  
  int num;
  int length;
  char password[32]; //assumes a 32bit size password

  printf("Please enter password length: \n");
  scanf("%d", &length);

  int lower = 33; //uses the ascii table dec value ranging from 33 = '!' to 122 = '~'
  int upper = 126;
  
  for (int i = 0; i < length; i++){
    num = randomNumber(lower, upper);
    password[i] = num;
  }
  printf("%s\n", password);
}

int randomNumber(int lower, int upper){
  int num;
  num = (rand() % (upper - lower + 1)) + lower;
  return num;
}

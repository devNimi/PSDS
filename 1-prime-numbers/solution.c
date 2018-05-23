#include <stdio.h>

int main(void) {
	// your code goes here
	int number = 1000;
  int primenNumber = 0;
  if (number > 0) {
    primenNumber = 1;
  }

  for (int i = (number-1); i > 1; i--) {
    if(number % i == 0){
      primenNumber = 0;
      break;
    }
  }

  if (primenNumber == 1) {
    printf("%s\n", "Number is prime");
  } else {
    printf("%s\n","number is not prime");
  }


	return 0;
}

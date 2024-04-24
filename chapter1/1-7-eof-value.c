#include <stdio.h>

int main() {
  printf("The expression getchar() != EOF is (press almost any key): %d\n",
         getchar() != EOF);
  printf("The value of EOF is: %d\n", EOF);
}

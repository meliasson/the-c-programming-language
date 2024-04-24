#include <stdio.h>

#define F_LOWER_LIMIT 0
#define F_UPPER_LIMIT 300
#define F_STEP 20

int main() {
  printf("Fahrenheit to Celsius\n");
  printf("---------------------\n");
  for (int i = F_LOWER_LIMIT; i <= F_UPPER_LIMIT; i = i + F_STEP) {
    printf("%3d\t%6.1f\n", i, 5.0 / 9 * (i - 32));
  }

  printf("\nCelsius to Fahrenheit\n");
  printf("---------------------\n");
  for (int i = 160; i >= -20; i = i - 12) {
    printf("%3d\t%6.1f\n", i, i * 9.0 / 5 + 32);
  }
}

#include <stdio.h>

float fahrenheit_to_celsius(int lower_limit, int upper_limit, int step);
float celsius_to_fahrenheit(int lower_limit, int upper_limit, int step);

int main() {
  printf("Fahrenheit to Celsius\n");
  printf("---------------------\n");
  fahrenheit_to_celsius(0, 300, 20);

  printf("\nCelsius to Fahrenheit\n");
  printf("---------------------\n");
  celsius_to_fahrenheit(-20, 160, 12);
}

float fahrenheit_to_celsius(int lower_limit, int upper_limit, int step) {
  for (int i = lower_limit; i <= upper_limit; i = i + step) {
    printf("%3d\t%6.1f\n", i, 5.0 / 9 * (i - 32));
  }
}

float celsius_to_fahrenheit(int lower_limit, int upper_limit, int step) {
  for (int i = upper_limit; i >= lower_limit; i = i - step) {
    printf("%3d\t%6.1f\n", i, i * 9.0 / 5 + 32);
  }
}

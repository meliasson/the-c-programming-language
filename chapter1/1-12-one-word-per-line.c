// Write a program that prints its input one word per line.

#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
  int c, state;
  while ((c = getchar()) != EOF) {
    if ((c == ' ' || c == '\n' || c == '\t')) {
      if (state == IN) {
        // We focus on words so we have to deal with multiple word
        // delimiters in a row. By inserting a new line only for the
        // first delimiter following a word.
        state = OUT;
        putchar('\n');
      }
    } else {
      state = IN;
      putchar(c);
    }
  }
}

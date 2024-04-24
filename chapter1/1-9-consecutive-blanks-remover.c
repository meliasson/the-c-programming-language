// Write a program to copy its input to its output, replacing each
// string of one or more blanks by a single blank.

#include <stdio.h>

int main() {
  int c, previous_c;
  while ((c = getchar()) != EOF) {
    if (c == ' ' && previous_c == ' ') {
      continue;
    }

    putchar(c);
    previous_c = c;
  }
}

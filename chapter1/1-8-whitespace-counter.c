#include <stdio.h>

int main() {
  int blanks = 0;
  int tabs = 0;
  int newlines = 0;
  int character;

  while ((character = getchar()) != EOF) {
    if (character == ' ') {
      blanks++;
    } else if (character == '\t') {
      tabs++;
    } else if (character == '\n') {
      newlines++;
    }
  }

  printf("%3d blanks\n%3d tabs\n%3d newlines\n", blanks, tabs, newlines);
}

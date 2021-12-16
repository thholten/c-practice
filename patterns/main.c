#include <stdio.h>
#include <stdlib.h>

int main() {
for (int i = 0; i < 9; i++) {
  for (int j = 0; j < 9; j++) {
    if (j % 2 == 0) {
      printf("%c", '@');
    } else {
      printf("%c", '^');
    }
  }
  printf("\n");
}
return 0;
}

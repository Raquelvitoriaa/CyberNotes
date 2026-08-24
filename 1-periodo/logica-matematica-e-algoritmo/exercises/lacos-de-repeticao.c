#include <stdio.h>

int main() {

  for(int i = 65; i <= 68; i ++) {
    for(int j = 1; j <= 4; j ++) {

      printf("%c %d", i, j);
    }
    printf("\n");
  }
  return 0;
}

#include <stdio.h>
void print_c(int a, char b) {
  for (int i = 0; i < a; i++) {
    printf("%c", b);
  }
}
int main(void) {
  int a;
  char b;
  scanf("%d %c", &a, &b);
  print_c(a, b);
  return 0;
}

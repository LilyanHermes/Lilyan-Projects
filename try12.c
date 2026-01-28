#include <stdio.h>
int main() {
  int setOne[3] = { 1, 3, 5 };
  int setTwo[6] = { 10, 20, 30, 40, 50, 60 };
  printf("%d\n", setTwo[ setOne[2] ] );
  return 0;
}

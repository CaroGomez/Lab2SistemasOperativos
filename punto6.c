#include <stdio.h>
#include <malloc.h>

int main(int argc, char const *argv[]) {
  int *arrayInt;
  arrayInt = malloc(10*sizeof(int));
  free(arrayInt);
  printf("%d\n", arrayInt[3]);
  return 0;
}

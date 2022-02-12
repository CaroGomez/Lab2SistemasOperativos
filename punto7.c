#include <stdio.h>
#include <malloc.h>

int main(int argc, char const *argv[]) {
  int *arrayInt;
  arrayInt = malloc(10*sizeof(int));
  int *p = &arrayInt[5];
  free(p);
  return 0;
}

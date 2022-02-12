#include <stdio.h>
#include <malloc.h>

int main(int argc, char const *argv[]) {
  int *data = malloc(100*sizeof(int));
  data[100] = 0;
  return 0;
}

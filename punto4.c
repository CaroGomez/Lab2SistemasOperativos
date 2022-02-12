#include <stdio.h>
#include <malloc.h>

int main(int argc, char const *argv[]) {
  int *p = malloc(sizeof(int));
  for(int i=0; i<10; i++){
    *p=i;
  }
  printf("%d\n", *p);
  return 0;
}

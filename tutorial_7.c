// Online C compiler to run C program online
#include <stdio.h>

typedef struct Add {
  int a;
  int b;
} add;

int main() {
  add a1;
  a1.a = 5;
  a1.b = 10;

  printf("a : %d",a1.a);
  printf("b : %d",a1.b);
  
  return 0;
}
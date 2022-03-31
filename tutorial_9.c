#include <stdio.h>      
int main() {
  short a;
  long b;
  long long c;
  long double d;

  printf("%d" , sizeof(a));
  printf("%d", sizeof(b));
  printf("%d", sizeof(c));
  printf("%d", sizeof(d));
  return 0;
}
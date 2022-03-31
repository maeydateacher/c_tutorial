#include <stdio.h>
int main()
{
  int a = 5;
  printf("a : %d\n", a);

  // Notice the use of & before var
  printf("address of a: %p", &a);  
  return 0;
}
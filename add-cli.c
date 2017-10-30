
#include <stdio.h>
#include <stdlib.h>
#include <arith.h>

int main(char argc, char *argv[])
{
   int a = atoi(argv[1]);
   int b = atoi(argv[2]);
   printf("%d + %d = %d\n", (int) a, (int) b, add(a, b));
   printf("%d - %d = %d\n", (int) a, (int) b, sub(a, b));
   return 0;
}

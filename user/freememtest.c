#include "kernel/types.h"
#include "user.h"

int
main(void)
{
  uint64 freemem = getfreemem();
  printf("Free memory: %d bytes\n", (int) freemem);
  exit(0);
}